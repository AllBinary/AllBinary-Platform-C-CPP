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
// package org.allbinary.logic.system.security.crypt

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct WeakCrypt WeakCrypt;
struct WeakCrypt {
    TsUtil* tsUtil;
    AbCrypt* abCrypt;
};

static const char** WeakCrypt_keys;
int32_t WeakCrypt_KEYMAX;

WeakCrypt* WeakCrypt_new(int32_t key);

void WeakCrypt_init(WeakCrypt* this, int32_t key);
const char* WeakCrypt_encrypt(WeakCrypt* this, const char* value);
const char* WeakCrypt_decrypt(WeakCrypt* this, const char* value);

// Static fields with runtime initializers: call this once at startup
void WeakCrypt_staticInit(void) {
    WeakCrypt_keys = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "qwres6qewrupoi1132790jfahleavi89398", "143uk32lngf8675gt1tv9214uvt924ut9u9", "12kvjlvlkv11445v12951v512v9m51295v1", "gampipoiupg4g43y5u238tu2485u20u0932", "a93u5uu02s2d2g3259u4395u409u093u9vu", "nlkxzj90je3mln9l8l89qjf0j3v50j23r9j", "2lk5fn5j23nr8f0233vq35n23jn58vhy843", "9q24334m598t092tkn2iv0982456n425j9g", "5m9uvmt9436243m5v34g09d43i52ki35g99", "n123lr1iubiu2br32lv32rbu23b32ub2rlb", "va0u0iovji2ojpvj2oij22poiu4ov2uv28v", "bkk80gn2v9uc902340ut209pcup0u09utc9", "mn32m32neee23c42fn32nf3mf2n3fn2m3fm", "zcxpozo3423voizupovsijevnv3n33o33n3", "v0345324thv93h03893893vh893v8h3vhzz", "v8na898v8wyef9ty39yv98yaw39yeeyf8ye", "45zd36d34jg09434hfshp8uj9sy8s7cyr78", "b098yy0908vdvh983b2lb327980a76s5e5e", "v90y9v9p8y3r98pagsdgsagyr6y3985yhfh", "vblkzhhzp8yvzi8u4t9856456zy3rv8a388", "da7696023rgf28dssfa98asd879hg32hewe", "afo7d6ffkjb3jr3i34gb24ytuvu3jr3uryf", "4gijvqo8vq984hv984hj5j3511h832hf833" }) / sizeof(const char*), (const char*[]){ "qwres6qewrupoi1132790jfahleavi89398", "143uk32lngf8675gt1tv9214uvt924ut9u9", "12kvjlvlkv11445v12951v512v9m51295v1", "gampipoiupg4g43y5u238tu2485u20u0932", "a93u5uu02s2d2g3259u4395u409u093u9vu", "nlkxzj90je3mln9l8l89qjf0j3v50j23r9j", "2lk5fn5j23nr8f0233vq35n23jn58vhy843", "9q24334m598t092tkn2iv0982456n425j9g", "5m9uvmt9436243m5v34g09d43i52ki35g99", "n123lr1iubiu2br32lv32rbu23b32ub2rlb", "va0u0iovji2ojpvj2oij22poiu4ov2uv28v", "bkk80gn2v9uc902340ut209pcup0u09utc9", "mn32m32neee23c42fn32nf3mf2n3fn2m3fm", "zcxpozo3423voizupovsijevnv3n33o33n3", "v0345324thv93h03893893vh893v8h3vhzz", "v8na898v8wyef9ty39yv98yaw39yeeyf8ye", "45zd36d34jg09434hfshp8uj9sy8s7cyr78", "b098yy0908vdvh983b2lb327980a76s5e5e", "v90y9v9p8y3r98pagsdgsagyr6y3985yhfh", "vblkzhhzp8yvzi8u4t9856456zy3rv8a388", "da7696023rgf28dssfa98asd879hg32hewe", "afo7d6ffkjb3jr3i34gb24ytuvu3jr3uryf", "4gijvqo8vq984hv984hj5j3511h832hf833" }));
    WeakCrypt_KEYMAX = java_array_length(WeakCrypt_keys);
}

static void WeakCrypt_initFields(WeakCrypt* this) {
    this->tsUtil = TsUtil_getInstance();
    this->abCrypt = AbCrypt_new(KeySpecFactory_getInstance()->DES);
}


void WeakCrypt_init(WeakCrypt* this, int32_t key) {
    WeakCrypt_initFields(this);
        JAVA_TRY {
            AbCrypt_init(this->abCrypt, WeakCrypt_keys[key]);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, "SuperCrypt(key)", e);
        } JAVA_END_TRY;
}

WeakCrypt* WeakCrypt_new(int32_t key) {
    WeakCrypt* this = calloc(1, sizeof(WeakCrypt));
    WeakCrypt_init(this, key);
    return this;
}


const char* WeakCrypt_encrypt(WeakCrypt* this, const char* value) {
        JAVA_TRY {
            int8_t* crypted = AbCrypt_encrypt(this->abCrypt, TsUtil_getByteArray(this->tsUtil, value));
            return DatabaseEncoder_encode(crypted);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("Encrypt Failed", this, "encrypt", e);
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_END_TRY;
}


const char* WeakCrypt_decrypt(WeakCrypt* this, const char* value) {
        JAVA_TRY {
            int8_t* decrypted = AbCrypt_decrypt(this->abCrypt, DatabaseEncoder_decode(value));
            return java_string_new(decrypted);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("decrypt Failed", this, "decrypt", e);
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_END_TRY;
}

