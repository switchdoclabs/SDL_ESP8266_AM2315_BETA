This is a BETA test of the new SwitchDoc Labs High Reliablity ESP8266 AM2315 driver.
SDL  Febrarury 2018

It will show the error count and why:

badCRCReads = reads witha bad CRC from the AM2315<BR>
badSpikeReads = Good CRC, but temperature spike found (greater than 15.9 degrees C in a single read)<BR>
badMessageReads = good CRC, but bad message Format<BR>

Example:

<pre>

Hum: 31.00
TempC: 21.30
-----------------
AM2315 Statistics
-----------------
goodReads = 102
badReads = 0
badCRCReads = 0
badSpikeReads = 0
badMessageReads = 0
highTemp = 21.30
lowTemp = 21.10
lastGoodTemp = 21.30
highSingleBadReadCount =0
:0:0:0:0:0:0:0:0:0:0:
-----------------
</pre>


