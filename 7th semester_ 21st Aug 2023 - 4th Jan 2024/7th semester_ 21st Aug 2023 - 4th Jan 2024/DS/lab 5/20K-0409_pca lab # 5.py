import pandas as pd
import numpy as np
from numpy.linalg import eig

def perform_pca(dataset_path):
    df = pd.read_csv(dataset_path)

    print("Shape of the dataset before PCA:", df.shape)
    
    # droping non-numeric columns
    df = df.select_dtypes(include=[np.number])
    A = df.to_numpy()
    
    AT = A.transpose()
    AAT = np.matmul(A, AT)
    
    matrix_rank = np.linalg.matrix_rank(A)
    
    # eigenvalues and eigenvectors of A * AT
    w, v = eig(AAT)
    
    # Sort the eigenvalues in ascending order
    w_sorted_indices = np.argsort(w)
    w = w[w_sorted_indices]
    v = v[:, w_sorted_indices]
    
    # Selecting eigenvectors corresponding to the largest eigenvalues
    FinalSelectedVectors = np.delete(v, -1, axis=1)  # Remove the last eigenvector
    
    return FinalSelectedVectors, matrix_rank

# path of  dataset
# dataset_path = r'C:\Users\Mukand\Desktop\data set for pca\bike-sharing.csv\bike-sharing.csv'
dataset_path = r'C:\Users\Mukand\Desktop\data set for pca\ames.csv\ames.csv'
# dataset_path = r'C:\Users\Mukand\Desktop\data set for pca\bike-sharing.csv\bike-sharing.csv'
# dataset_path = r'C:\Users\Mukand\Desktop\data set for pca\Country-data.csv'
# dataset_path = r'C:\Users\Mukand\Desktop\data set for pca\customer.csv\customer.csv'
# dataset_path = r'C:\Users\Mukand\Desktop\data set for pca\abalone.csv'

principal_components_housing, rank_bike = perform_pca(dataset_path)

# first 5 principal components and their rank
print("First 5 Principal Components for the dataset:")
print(principal_components_housing[:, :5])
print("Matrix Rank for dataset:", rank_bike)
