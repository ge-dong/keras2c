import sys
from plasma.conf import conf
if('keras_tcn' in conf['model'].keys() and conf['model']['keras_tcn']==True):
  from plasma.models import builder_tcn as builder
  print('building tcn model')
else:
  from plasma.models import builder
  print('building lstm model')
specific_builder = builder.ModelBuilder(conf) 
model = specific_builder.build_model(True)

print('FRNN Model built....')
custom_path = sys.argv[1]
specific_builder.load_model_weights(model,custom_path)
model.summary()
print('FRNN Model loaded....')
