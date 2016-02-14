/**
 * Audio Parser for Dancing-LED's
 * Graham Ellis and Sheivin Goyal
 * Spring 2016
 */
#ifndef __AUDIO_PARSER_H__
#define __AUDIO_PARSER_H__
//need some includes
#include <stdio.h>
#include <sys/time.h>
#include <string.h>
#include <alsa/asoundlib.h>
void parse_audio(char ** argv);


void parse_buffer(/*args?*/);


void open_device(/*args?*/);

int set_params(snd_pcm_t * handle, snd_pcm_hw_params_t *params /* more parameters?*/){
