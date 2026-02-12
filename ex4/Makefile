CC = g++
CFLAGS = -fPIC -shared
SRC = particles.cpp recon_track.cpp recon_track.h
OUT = particles.so recon_track.so

particle: particles.cpp
	$(CC) $(CFLAGS) particles.cpp -o particles.so

recon_track: recon_track.cpp recon_track.h
	$(CC) $(CFLAGS) recon_track.cpp -o recon_track.so

clean:
	re *.o output
