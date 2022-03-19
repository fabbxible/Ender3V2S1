#
# random-bin.py
# Set a unique firmware name based on current date and time
#
import pioutil
if pioutil.is_pio_build():
	from datetime import datetime
	Import("env")
	#env['PROGNAME'] = datetime.now().strftime("firmware-%Y%m%d-%H%M%S")
	name = env['PIOENV']
	print("name:")
	print(name)
	env['PROGNAME'] = name + "-" + datetime.now().strftime("%y%m%d-%H%M")