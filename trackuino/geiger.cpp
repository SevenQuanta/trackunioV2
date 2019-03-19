/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 */

//Includes
#include "config.h"
#include "geiger.h"
#include <stdlib.h>
#include <string.h>

char *geig_text;
int valid_read;

void set_check(int x){
    valid_read = x;
}

void set_text(char *val){
    if(geig_text != NULL){
        free(geig_text);
    }
    geig_text = (char *) malloc(sizeof(val));
    strcpy(geig_text, val);
}

//Internal Variables
/*char *CPS_STRING = "CPS";
char *CPM_STRING = "CPM";
char *spelling;



//External Variables
long cps;
long cpm;
float usv;
char geig_mode[5];
int parse_error;
int ret;

void geiger_setup(){
    cps = 0;
    cpm = 0;
    usv = 0.0;
    strcpy(geig_mode, "VOID");
    parse_error = false;
    spelling = (char *) malloc(30);
    strcpy(spelling, "");
}
void geiger_reset_parser(){
    cps = 0;
    cpm = 0;
    usv = 0.0;
    strcpy(geig_mode, "VOID");
    if(spelling != NULL){
        free(spelling);
    }
    spelling = (char *) malloc(30);
    strcpy(spelling, "");
    parse_error = false;
}

void geiger_decode(){

}

void geiger_load_char(char c){
    if(c == '\n'){
        geiger_decode();
        return;
    }
    size_t len = strlen(spelling);
    if(len >= sizeof(spelling) - 1){
        spelling = (char *) realloc(spelling, 2 * len);
    }
    spelling[len] = c;
    spelling[len + 1] = '\0';
}*/