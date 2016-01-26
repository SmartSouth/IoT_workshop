First, Windows users need to install curl from http://curl.haxx.se/download.html and install unzip it to the dekstop. Then fire up the Start menu and enter ‘cmd’ and press enter. Type ‘cd Desktop’ to change directory and curl is ready to be used. The first example shows how to make a simple request with curl:

curl www.smartsouth.uk/archer.txt

Now make your request ‘verbose’ with the ‘-v’ argument:

curl -v www.smartsouth.uk/workshop.html
