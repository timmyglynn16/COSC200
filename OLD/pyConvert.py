def main():

    while True:
        reply = raw_input('Enter your string (tpye "stop" to quit program): ')
        if reply == 'stop': break
        print ('Your string in upper case is: ')
	print reply.upper()

main()