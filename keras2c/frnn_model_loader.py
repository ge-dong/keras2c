import sys
from plasma.conf import conf
if('keras_tcn' in conf['model'].keys() and conf['model']['keras_tcn']==True):
  from plasma.models import builder_tcn as builder
else:
  from plasma.models import builder

def frnn_model_loader(custom_path):
   specific_builder = builder.ModelBuilder(conf) 
   model = specific_builder.build_model(True)

   print('FRNN Model built....')
   specific_builder.load_model_weights(model,custom_path)
   print('FRNN Model loaded....')
   model.summary()
   return model
