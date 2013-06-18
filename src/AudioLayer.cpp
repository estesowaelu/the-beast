//
//  The Beast
//	A game conceived for Global Game Jam 2013
//
//  AudioLayer.cpp
//  Created by Tim Honeywell on 27 January 2013.
//

#include "AudioLayer.h"

AudioLayer::AudioLayer() {}

void AudioLayer::initialize() {
	EnterMovies();
	
	CFBundleRef gameBundle = CFBundleGetMainBundle();

	CFStringRef fileName;
	CFStringRef fileExtension;
	CFStringRef subdirectory = NULL;
	CFURLRef fileLocation;
	OSErr error;
	Handle dataRef;
	OSType dataRefType;
	short fileID = movieInDataForkResID;
	
	fileExtension = CFSTR("aiff");
	
	fileName = CFSTR("RainInsideEdited");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&rainIndoors, 0, &fileID, dataRef, dataRefType);
	
	fileExtension = CFSTR("mp3");
	
	fileName = CFSTR("vaka");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&tempSTrack, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("RainOutsideEdited");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&rainOutdoors, 0, &fileID, dataRef, dataRefType);
	
	fileExtension = CFSTR("wav");
	
	fileName = CFSTR("CracklingFire");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&fire, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("GrandfatherClockEdited");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&tickTock, 0, &fileID, dataRef, dataRefType);
		
	fileName = CFSTR("HeartbeatEdited13");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat01, 0, &fileID, dataRef, dataRefType);

	fileName = CFSTR("HeartbeatEdited12");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat02, 0, &fileID, dataRef, dataRefType);

	fileName = CFSTR("HeartbeatEdited11");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat03, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited10");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat04, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited09");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat05, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited08");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat06, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited07");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat07, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited06");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat08, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited05");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat09, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited04");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat10, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited03");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat11, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited02");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat12, 0, &fileID, dataRef, dataRefType);
	
	fileName = CFSTR("HeartbeatEdited01");
	fileLocation = CFBundleCopyResourceURL(gameBundle, fileName, fileExtension, subdirectory);
	error = QTNewDataReferenceFromCFURL(fileLocation, 0, &dataRef, &dataRefType);
	error = NewMovieFromDataRef(&Heartbeat13, 0, &fileID, dataRef, dataRefType);
}

void AudioLayer::service() {
	MoviesTask(tempSTrack, 1);
	MoviesTask(rainIndoors, 1);
	MoviesTask(rainOutdoors, 1);
	MoviesTask(fire, 1);
	MoviesTask(tickTock, 1);
	MoviesTask(Heartbeat01, 1);
	MoviesTask(Heartbeat02, 1);
	MoviesTask(Heartbeat03, 1);
	MoviesTask(Heartbeat04, 1);
	MoviesTask(Heartbeat05, 1);
	MoviesTask(Heartbeat06, 1);
	MoviesTask(Heartbeat07, 1);
	MoviesTask(Heartbeat08, 1);
	MoviesTask(Heartbeat09, 1);
	MoviesTask(Heartbeat10, 1);
	MoviesTask(Heartbeat11, 1);
	MoviesTask(Heartbeat12, 1);
	MoviesTask(Heartbeat13, 1);
}

void AudioLayer::silence() {
	stopSound(tempSTrack);

	stopSound(rainIndoors);
	stopSound(rainOutdoors);
	stopSound(tickTock);
	stopSound(fire);

	stopSound(Heartbeat01);
	stopSound(Heartbeat02);
	stopSound(Heartbeat03);
	stopSound(Heartbeat04);
	stopSound(Heartbeat05);
	stopSound(Heartbeat06);
	stopSound(Heartbeat07);
	stopSound(Heartbeat08);
	stopSound(Heartbeat09);
	stopSound(Heartbeat10);
	stopSound(Heartbeat11);
	stopSound(Heartbeat12);
	stopSound(Heartbeat13);
}

void AudioLayer::playSound(Movie mSound) {
	StartMovie(mSound);
}

void AudioLayer::loopSound(Movie mSound) {
	if (IsMovieDone(mSound)) {
		GoToBeginningOfMovie(mSound);
		StartMovie(mSound);
	}
}

void AudioLayer::stopSound(Movie mSound) {
	StopMovie(mSound);
}

void AudioLayer::setSoundVolume(Movie mSound, int volume) {
	SetMovieVolume(mSound, volume);
}
