import keras
from keras.models import load_model
import sys

model=load_model(sys.argv[1])
model.summary()


