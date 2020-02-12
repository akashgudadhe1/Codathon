import urllib2,os
os.system('cls')
print 'SPOJ problem pdf downloader'
url = 'http://www.codechef.com/problems/'
print 'Enter problem code'
prblm = raw_input()
prblm = prblm.upper()
url = url + prblm +'.pdf'
print 'Downloading '+url
pdf = urllib2.urlopen(url)
#if int(pdf.info().getheader('Content-Length').strip())<=10:
#	print 'Error downloading '+prblm
#	exit()
output = open(prblm+'.pdf','wb')
output.write(pdf.read())
pdf.close()
print 'Done'
