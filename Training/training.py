from sklearn.svm import SVC
from classifier import *
features, classmap = load_features('Dataset/')
X, y = features[:, :-1], features[:, -1]
classifier = SVC(kernel='rbf', gamma=0.001).fit(X, y)