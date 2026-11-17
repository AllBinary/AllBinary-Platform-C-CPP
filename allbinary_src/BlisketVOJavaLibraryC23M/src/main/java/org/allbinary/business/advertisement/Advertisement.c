/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/advertisement/image/AdvertisementImageInterface.h"
#include "org/allbinary/business/advertisement/product/AdvertisementProductInterface.h"
#include "org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"
#include "org/allbinary/business/advertisement/AdvertisementInterface.h"

typedef struct Advertisement Advertisement;
struct Advertisement {
    AdvertisementInterface AdvertisementInterface_interface;
    const char* artist;
    const char* artistLink;
    const char* title;
    const char* dateAdded;
    const char* directory;
    const char* framedLink;
    int32_t rank;
    Money* listPrice;
    Money* ourPrice;
    AdvertisementImageInterface* image;
    AdvertisementProductInterface* product;
    AdvertisementThumbnailInterface* thumbnail;
    DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface;
};


Advertisement* Advertisement_new(void);

void Advertisement_init(Advertisement* this);
const char* Advertisement_getArtist(Advertisement* this);
void Advertisement_setArtist(Advertisement* this, const char* artist);
const char* Advertisement_getArtistLink(Advertisement* this);
void Advertisement_setArtistLink(Advertisement* this, const char* artistLink);
const char* Advertisement_getTitle(Advertisement* this);
void Advertisement_setTitle(Advertisement* this, const char* title);
const char* Advertisement_getDateAdded(Advertisement* this);
void Advertisement_setDateAdded(Advertisement* this, const char* dateAdded);
const char* Advertisement_getDirectory(Advertisement* this);
void Advertisement_setDirectory(Advertisement* this, const char* directory);
const char* Advertisement_getFramedLink(Advertisement* this);
void Advertisement_setFramedLink(Advertisement* this, const char* framedLink);
Money* Advertisement_getListPrice(Advertisement* this);
void Advertisement_setListPrice(Advertisement* this, Money* listPrice);
Money* Advertisement_getOurPrice(Advertisement* this);
void Advertisement_setOurPrice(Advertisement* this, Money* ourPrice);
int32_t Advertisement_getRank(Advertisement* this);
void Advertisement_setRank(Advertisement* this, int32_t rank);
AdvertisementImageInterface* Advertisement_getImage(Advertisement* this);
void Advertisement_setImage(Advertisement* this, AdvertisementImageInterface* image);
AdvertisementProductInterface* Advertisement_getProduct(Advertisement* this);
void Advertisement_setProduct(Advertisement* this, AdvertisementProductInterface* product);
AdvertisementThumbnailInterface* Advertisement_getThumbnail(Advertisement* this);
void Advertisement_setThumbnail(Advertisement* this, AdvertisementThumbnailInterface* thumbnail);
DisplayInBrowserContraintsInterface* Advertisement_getDisplayInBrowserContraintsInterface(Advertisement* this);

static void Advertisement_initFields(Advertisement* this) {
    this->artist = nullptr;
    this->artistLink = nullptr;
    this->title = nullptr;
    this->dateAdded = nullptr;
    this->directory = nullptr;
    this->framedLink = nullptr;
    this->rank = 0;
    this->listPrice = nullptr;
    this->ourPrice = nullptr;
    this->image = nullptr;
    this->product = nullptr;
    this->thumbnail = nullptr;
    
}


void Advertisement_init(Advertisement* this) {
    Advertisement_initFields(this);
        this->displayInBrowserContraintsInterface = nullptr;
}

Advertisement* Advertisement_new(void) {
    Advertisement* this = calloc(1, sizeof(Advertisement));
    Advertisement_init(this);
    return this;
}


const char* Advertisement_getArtist(Advertisement* this) {
        return this->artist;
}


void Advertisement_setArtist(Advertisement* this, const char* artist) {
        this->artist = artist;
}


const char* Advertisement_getArtistLink(Advertisement* this) {
        return this->artistLink;
}


void Advertisement_setArtistLink(Advertisement* this, const char* artistLink) {
        this->artistLink = artistLink;
}


const char* Advertisement_getTitle(Advertisement* this) {
        return this->title;
}


void Advertisement_setTitle(Advertisement* this, const char* title) {
        this->title = title;
}


const char* Advertisement_getDateAdded(Advertisement* this) {
        return this->dateAdded;
}


void Advertisement_setDateAdded(Advertisement* this, const char* dateAdded) {
        this->dateAdded = dateAdded;
}


const char* Advertisement_getDirectory(Advertisement* this) {
        return this->directory;
}


void Advertisement_setDirectory(Advertisement* this, const char* directory) {
        this->directory = directory;
}


const char* Advertisement_getFramedLink(Advertisement* this) {
        return this->framedLink;
}


void Advertisement_setFramedLink(Advertisement* this, const char* framedLink) {
        this->framedLink = framedLink;
}


Money* Advertisement_getListPrice(Advertisement* this) {
        return this->listPrice;
}


void Advertisement_setListPrice(Advertisement* this, Money* listPrice) {
        this->listPrice = listPrice;
}


Money* Advertisement_getOurPrice(Advertisement* this) {
        return this->ourPrice;
}


void Advertisement_setOurPrice(Advertisement* this, Money* ourPrice) {
        this->ourPrice = ourPrice;
}


int32_t Advertisement_getRank(Advertisement* this) {
        return this->rank;
}


void Advertisement_setRank(Advertisement* this, int32_t rank) {
        this->rank = rank;
}


AdvertisementImageInterface* Advertisement_getImage(Advertisement* this) {
        return this->image;
}


void Advertisement_setImage(Advertisement* this, AdvertisementImageInterface* image) {
        this->image = image;
}


AdvertisementProductInterface* Advertisement_getProduct(Advertisement* this) {
        return this->product;
}


void Advertisement_setProduct(Advertisement* this, AdvertisementProductInterface* product) {
        this->product = product;
}


AdvertisementThumbnailInterface* Advertisement_getThumbnail(Advertisement* this) {
        return this->thumbnail;
}


void Advertisement_setThumbnail(Advertisement* this, AdvertisementThumbnailInterface* thumbnail) {
        this->thumbnail = thumbnail;
}


DisplayInBrowserContraintsInterface* Advertisement_getDisplayInBrowserContraintsInterface(Advertisement* this) {
        return this->displayInBrowserContraintsInterface;
}

