import sys
from plasma.conf import conf
from plasma.models import builder
def frnn_model_loader(custom_path):
   print(conf)
   specific_builder = builder.ModelBuilder(conf) 
   model = specific_builder.build_model_PCS(False)
   print('Printing_out whole model summary..............********.......********')
   model.summary()
   print('FRNN Model built....')
   specific_builder.load_model_weights(model,custom_path)
   print('FRNN Model loaded....')
   model.summary()
   return model