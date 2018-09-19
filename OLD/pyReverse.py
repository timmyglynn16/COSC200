def main():

    f = open("first.txt", "rb")
    s = f.read()
    f.close()
    f = open("second.txt", "wb")
    f.write(s[::-1])
    f.close()

main()