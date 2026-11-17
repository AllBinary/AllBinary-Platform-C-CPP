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
// package org.allbinary.image.gui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/image/analysis/ImageAnalysisResults.h"
#include "org/allbinary/media/image/analysis/ImageColorRangeResults.h"
#include "org/allbinary/media/image/analysis/ImageColorResults.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct ImageAnalysisResultsJPanel ImageAnalysisResultsJPanel;
struct ImageAnalysisResultsJPanel {
    JPanel base;
    JTextField* avgBlueJTextField;
    JTextField* avgGreenJTextField;
    JTextField* avgRedJTextField;
    JComboBox* jComboBox1;
    JLabel* jLabel1;
    JLabel* jLabel10;
    JLabel* jLabel11;
    JLabel* jLabel12;
    JLabel* jLabel13;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JLabel* jLabel4;
    JLabel* jLabel5;
    JLabel* jLabel6;
    JLabel* jLabel7;
    JLabel* jLabel8;
    JLabel* jLabel9;
    JTextField* matchingPixelsJTextField;
    JTextField* maxBlueJTextField;
    JTextField* maxGreenJTextField;
    JTextField* maxRedJTextField;
    JTextField* minBlueJTextField;
    JTextField* minGreenJTextField;
    JTextField* minRedJTextField;
    JTextField* percentMatchingJTextField;
    JTextField* totalPixelsJTextField;
};


ImageAnalysisResultsJPanel* ImageAnalysisResultsJPanel_new(ImageAnalysisResults** imageAnalysisResultsArray);

void ImageAnalysisResultsJPanel_init(ImageAnalysisResultsJPanel* this, ImageAnalysisResults** imageAnalysisResultsArray);
static void ImageAnalysisResultsJPanel_initComponents(ImageAnalysisResultsJPanel* this);
static void ImageAnalysisResultsJPanel_updateImageColorRangeResults(ImageAnalysisResultsJPanel* this, ImageAnalysisResults* imageAnalysisResults);

static void ImageAnalysisResultsJPanel_initFields(ImageAnalysisResultsJPanel* this) {
    this->avgBlueJTextField = nullptr;
    this->avgGreenJTextField = nullptr;
    this->avgRedJTextField = nullptr;
    this->jComboBox1 = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel10 = nullptr;
    this->jLabel11 = nullptr;
    this->jLabel12 = nullptr;
    this->jLabel13 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jLabel4 = nullptr;
    this->jLabel5 = nullptr;
    this->jLabel6 = nullptr;
    this->jLabel7 = nullptr;
    this->jLabel8 = nullptr;
    this->jLabel9 = nullptr;
    this->matchingPixelsJTextField = nullptr;
    this->maxBlueJTextField = nullptr;
    this->maxGreenJTextField = nullptr;
    this->maxRedJTextField = nullptr;
    this->minBlueJTextField = nullptr;
    this->minGreenJTextField = nullptr;
    this->minRedJTextField = nullptr;
    this->percentMatchingJTextField = nullptr;
    this->totalPixelsJTextField = nullptr;
}


void ImageAnalysisResultsJPanel_init(ImageAnalysisResultsJPanel* this, ImageAnalysisResults** imageAnalysisResultsArray) {
    JPanel_init(&this->base);
    ImageAnalysisResultsJPanel_initFields(this);
        ImageAnalysisResultsJPanel_initComponents(this);
        ImageAnalysisResults* imageAnalysisResults = imageAnalysisResultsArray[0];
        ImageAnalysisResultsJPanel_updateImageColorRangeResults(this, imageAnalysisResults);
}

ImageAnalysisResultsJPanel* ImageAnalysisResultsJPanel_new(ImageAnalysisResults** imageAnalysisResultsArray) {
    ImageAnalysisResultsJPanel* this = calloc(1, sizeof(ImageAnalysisResultsJPanel));
    ImageAnalysisResultsJPanel_init(this, imageAnalysisResultsArray);
    return this;
}


static void ImageAnalysisResultsJPanel_initComponents(ImageAnalysisResultsJPanel* this) {
        this->jLabel1 = JLabel_new();
        this->jLabel2 = JLabel_new();
        this->jLabel3 = JLabel_new();
        this->percentMatchingJTextField = JTextField_new();
        this->totalPixelsJTextField = JTextField_new();
        this->matchingPixelsJTextField = JTextField_new();
        this->jComboBox1 = JComboBox_new();
        this->jLabel4 = JLabel_new();
        this->jLabel5 = JLabel_new();
        this->jLabel6 = JLabel_new();
        this->jLabel7 = JLabel_new();
        this->avgRedJTextField = JTextField_new();
        this->avgGreenJTextField = JTextField_new();
        this->avgBlueJTextField = JTextField_new();
        this->minGreenJTextField = JTextField_new();
        this->jLabel8 = JLabel_new();
        this->jLabel9 = JLabel_new();
        this->jLabel10 = JLabel_new();
        this->minRedJTextField = JTextField_new();
        this->minBlueJTextField = JTextField_new();
        this->jLabel11 = JLabel_new();
        this->jLabel12 = JLabel_new();
        this->jLabel13 = JLabel_new();
        this->maxRedJTextField = JTextField_new();
        this->maxGreenJTextField = JTextField_new();
        this->maxBlueJTextField = JTextField_new();
        JLabel_setText(this->jLabel1, "Matching Pixels:");
        JLabel_setText(this->jLabel2, "Total Pixels:");
        JLabel_setText(this->jLabel3, "Percent Matching:");
        JTextField_setEditable(this->percentMatchingJTextField, false);
        JTextField_setEditable(this->totalPixelsJTextField, false);
        JTextField_setEditable(this->matchingPixelsJTextField, false);
        JComboBox_setModel(this->jComboBox1, DefaultComboBoxModel_new(((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ CommonPhoneStrings_getInstance()->ONE }) / sizeof(const char*), (const char*[]){ CommonPhoneStrings_getInstance()->ONE }))));
        JComboBox_setEnabled(this->jComboBox1, false);
        JLabel_setText(this->jLabel4, "Image:");
        JLabel_setText(this->jLabel5, "Average Red:");
        JLabel_setText(this->jLabel6, "Average Green:");
        JLabel_setText(this->jLabel7, "Average Blue:");
        JTextField_setEditable(this->avgRedJTextField, false);
        JTextField_setEditable(this->avgGreenJTextField, false);
        JTextField_setEditable(this->avgBlueJTextField, false);
        JTextField_setEditable(this->minGreenJTextField, false);
        JLabel_setText(this->jLabel8, "Min Red:");
        JLabel_setText(this->jLabel9, "Min Green:");
        JLabel_setText(this->jLabel10, "Min Blue:");
        JTextField_setEditable(this->minRedJTextField, false);
        JTextField_setEditable(this->minBlueJTextField, false);
        JLabel_setText(this->jLabel11, "Max Red:");
        JLabel_setText(this->jLabel12, "Max Green:");
        JLabel_setText(this->jLabel13, "Max Blue:");
        JTextField_setEditable(this->maxRedJTextField, false);
        JTextField_setEditable(this->maxGreenJTextField, false);
        JTextField_setEditable(this->maxBlueJTextField, false);
        GroupLayout* layout = GroupLayout_new(this);
        ImageAnalysisResultsJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel3), addComponent, this->jLabel2), addComponent, this->jLabel1), addComponent, this->jLabel5), addComponent, this->jLabel6), addComponent, this->jLabel7), addComponent, this->jLabel4)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jComboBox1, javax_swing->GroupLayout->PREFERRED_SIZE, 81, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->avgBlueJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 81, Short_MAX_VALUE), addComponent, this->avgGreenJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 81, Short_MAX_VALUE), addComponent, this->avgRedJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 81, Short_MAX_VALUE), addComponent, this->totalPixelsJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 81, Short_MAX_VALUE), addComponent, this->percentMatchingJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 81, Short_MAX_VALUE), addComponent, this->matchingPixelsJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 81, Short_MAX_VALUE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel12), addComponent, this->jLabel13), addComponent, this->jLabel8), addComponent, this->jLabel9), addComponent, this->jLabel10), addComponent, this->jLabel11)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->minRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 82, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->maxGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 82, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->minGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 82, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->minBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 82, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->maxRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 82, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->maxBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, 82, javax_swing->GroupLayout->PREFERRED_SIZE)), addContainerGap, 18, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel4), addComponent, this->jComboBox1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->matchingPixelsJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel8), addComponent, this->minRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel2), addComponent, this->totalPixelsJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel9), addComponent, this->minGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel3), addComponent, this->percentMatchingJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel10), addComponent, this->minBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel5), addComponent, this->avgRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel11), addComponent, this->maxRedJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel6), addComponent, this->avgGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->maxGreenJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel12)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel7), addComponent, this->avgBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addComponent, this->jLabel13), addComponent, this->maxBlueJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE))));
}


static void ImageAnalysisResultsJPanel_updateImageColorRangeResults(ImageAnalysisResultsJPanel* this, ImageAnalysisResults* imageAnalysisResults) {
        ImageColorRangeResults* imageColorRangeResults = ImageAnalysisResults_getImageColorRangeResults(imageAnalysisResults);
        JTextField_setText(this->matchingPixelsJTextField, Long_toString(ImageColorRangeResults_getMatchingPixelsChecked(imageColorRangeResults)));
        JTextField_setText(this->totalPixelsJTextField, Long_toString(ImageColorRangeResults_getTotalPixelsChecked(imageColorRangeResults)));
        JTextField_setText(this->percentMatchingJTextField, Float_toString(ImageColorRangeResults_getPercent(imageColorRangeResults)));
        ImageColorResults* imageColorResults = ImageAnalysisResults_getImageColorResults(imageAnalysisResults);
        JTextField_setText(this->avgRedJTextField, Float_toString(JAVA_CALL(ImageColorResults_getColorAverage(imageColorResults), getAvgRed)));
        JTextField_setText(this->avgGreenJTextField, Float_toString(JAVA_CALL(ImageColorResults_getColorAverage(imageColorResults), getAvgGreen)));
        JTextField_setText(this->avgBlueJTextField, Float_toString(JAVA_CALL(ImageColorResults_getColorAverage(imageColorResults), getAvgBlue)));
        JTextField_setText(this->minRedJTextField, Long_toString(JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMinRed)));
        JTextField_setText(this->minGreenJTextField, Long_toString(JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMinGreen)));
        JTextField_setText(this->minBlueJTextField, Long_toString(JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMinBlue)));
        JTextField_setText(this->maxRedJTextField, Long_toString(JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMaxRed)));
        JTextField_setText(this->maxGreenJTextField, Long_toString(JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMaxGreen)));
        JTextField_setText(this->maxBlueJTextField, Long_toString(JAVA_CALL(ImageColorResults_getColorRange(imageColorResults), getMaxBlue)));
}

