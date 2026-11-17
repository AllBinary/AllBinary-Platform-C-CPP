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
// #include "java/awt/image/BufferedImage.h"
// #include "java/io/File.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/image/ImagePersistanceUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"
#include "org/allbinary/media/image/ImageStrings.h"
#include "org/allbinary/media/image/ImageUnifierCell.h"
#include "org/allbinary/media/image/ImageUnifierProperties.h"
#include "org/allbinary/media/image/ImageUnifierUtil.h"
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImagesRatioUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JPanel.h"

typedef struct ImageUnifierJPanel ImageUnifierJPanel;
struct ImageUnifierJPanel {
    JPanel base;
    ImageProcessorInputCompositeInterface ImageProcessorInputCompositeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ImageStrings* imageStrings;
    ImagesRatioUtil* imagesRatioUtil;
    ImageProcessorInput* imageProcessorInput;
    ImageIconUnique** icon;
    ImageUnifierProperties* imageUnifierProperties;
    BufferedImage* result;
    bool isImageFillIn;
    JTextField* avgRatioJTextField;
    JTextField* cellHeightJTextField;
    JTextField* cellRatioJTextField;
    JTextField* cellWidthJTextField;
    JTextField* columnsJTextField;
    JButton* downJButton;
    JButton* fudgeItJButton;
    JList* imageJList;
    JButton* jButton1;
    JButton* jButton2;
    JButton* jButtonOrder;
    JLabel* jLabel1;
    JLabel* jLabel2;
    JLabel* jLabel3;
    JLabel* jLabel4;
    JLabel* jLabel5;
    JLabel* jLabel6;
    JPanel* jPanel1;
    JScrollPane* jScrollPane1;
    JScrollPane* jScrollPane2;
    JTextField* rowsJTextField;
    JButton* upJButton;
};


ImageUnifierJPanel* ImageUnifierJPanel_new(ImageProcessorInput* imageProcessorInput);

void ImageUnifierJPanel_init(ImageUnifierJPanel* this, ImageProcessorInput* imageProcessorInput);
void ImageUnifierJPanel_init(ImageUnifierJPanel* this);
static void ImageUnifierJPanel_updateImage(ImageUnifierJPanel* this);
static void ImageUnifierJPanel_updateImageWithFudgedImages(ImageUnifierJPanel* this);
static void ImageUnifierJPanel_updateImage(ImageUnifierJPanel* this, BufferedImage** tempBufferedImageArray);
static void ImageUnifierJPanel_updateOnPropertiesChange(ImageUnifierJPanel* this);
static void ImageUnifierJPanel_initComponents(ImageUnifierJPanel* this);
static void ImageUnifierJPanel_jButton2ActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_columnsJTextFieldKeyPressed(ImageUnifierJPanel* this, KeyEvent* evt);
static void ImageUnifierJPanel_columnsJTextFieldKeyTyped(ImageUnifierJPanel* this, KeyEvent* evt);
static void ImageUnifierJPanel_columnsJTextFieldPropertyChange(ImageUnifierJPanel* this, PropertyChangeEvent* evt);
static void ImageUnifierJPanel_fudgeItJButtonActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_cellHeightJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_cellWidthJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_columnsJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_rowsJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_jButton1ActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_downJButtonActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_upJButtonActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
static void ImageUnifierJPanel_jButtonOrderActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt);
ImageProcessorInput* ImageUnifierJPanel_getImageProcessorInput(ImageUnifierJPanel* this);
void ImageUnifierJPanel_setImageProcessorInput(ImageUnifierJPanel* this, ImageProcessorInput* imageProcessorInput);

static void ImageUnifierJPanel_initFields(ImageUnifierJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageStrings = ImageStrings_getInstance();
    this->imagesRatioUtil = ImagesRatioUtil_getInstance();
    this->imageProcessorInput = nullptr;
    this->icon = nullptr;
    this->imageUnifierProperties = nullptr;
    this->result = nullptr;
    this->isImageFillIn = true;
    this->avgRatioJTextField = nullptr;
    this->cellHeightJTextField = nullptr;
    this->cellRatioJTextField = nullptr;
    this->cellWidthJTextField = nullptr;
    this->columnsJTextField = nullptr;
    this->downJButton = nullptr;
    this->fudgeItJButton = nullptr;
    this->imageJList = nullptr;
    this->jButton1 = nullptr;
    this->jButton2 = nullptr;
    this->jButtonOrder = nullptr;
    this->jLabel1 = nullptr;
    this->jLabel2 = nullptr;
    this->jLabel3 = nullptr;
    this->jLabel4 = nullptr;
    this->jLabel5 = nullptr;
    this->jLabel6 = nullptr;
    this->jPanel1 = nullptr;
    this->jScrollPane1 = nullptr;
    this->jScrollPane2 = nullptr;
    this->rowsJTextField = nullptr;
    this->upJButton = nullptr;
}


void ImageUnifierJPanel_init(ImageUnifierJPanel* this, ImageProcessorInput* imageProcessorInput) {
    JPanel_init(&this->base);
    ImageUnifierJPanel_initFields(this);
        ImageUnifierJPanel_initComponents(this);
        ImageUnifierJPanel_setImageProcessorInput(this, imageProcessorInput);
}

ImageUnifierJPanel* ImageUnifierJPanel_new(ImageProcessorInput* imageProcessorInput) {
    ImageUnifierJPanel* this = calloc(1, sizeof(ImageUnifierJPanel));
    ImageUnifierJPanel_init(this, imageProcessorInput);
    return this;
}


void ImageUnifierJPanel_init(ImageUnifierJPanel* this) {
        JAVA_TRY {
            ImageProcessorInput* imageProcessorInput = ImageUnifierJPanel_getImageProcessorInput(this);
            BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
            this->icon = ((ImageIconUnique**) java_array_new(sizeof(ImageIconUnique*), java_array_length(bufferedImageArray)));
            DefaultListModel* defaultListModel = DefaultListModel_new();
            for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
                double width = JAVA_CALL(bufferedImageArray[index], getWidth);
                double height = JAVA_CALL(bufferedImageArray[index], getHeight);
                int32_t newWidth = 52;
                double oldRatio = width / height;
                int32_t newHeight = ((int32_t) (((double) newWidth) / oldRatio));
                BufferedImage* iconBufferedImage = ImageUtil_createBufferedImage(ImageUtil_getInstance(), bufferedImageArray[index], newWidth, newHeight, true);
                this->icon[index] = ImageIconUnique_new(iconBufferedImage, index);
                DefaultListModel_addElement(defaultListModel, this->icon[index]);
            }
            JList_setModel(this->imageJList, defaultListModel);
            ImageUnifierJPanel_updateOnPropertiesChange(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}


static void ImageUnifierJPanel_updateImage(ImageUnifierJPanel* this) {
        JAVA_TRY {
            BufferedImage** bufferedImageArray = JAVA_CALL(ImageUnifierJPanel_getImageProcessorInput(this), getBufferedImageArray);
            BufferedImage** tempBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), java_array_length(bufferedImageArray)));
            for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
                ImageIconUnique* indexedImageIcon = ((ImageIconUnique*) JAVA_CALL(JList_getModel(this->imageJList), getElementAt, index));
                BufferedImage* bufferedImage = ImageUtil_createBufferedImage(ImageUtil_getInstance(), bufferedImageArray[ImageIconUnique_getId(indexedImageIcon)], JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(this->imageUnifierProperties), getWidth), JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(this->imageUnifierProperties), getHeight), false);
                tempBufferedImageArray[index] = bufferedImage;
            }
            int32_t totalImages = ImageUnifierProperties_getRows(this->imageUnifierProperties) * ImageUnifierProperties_getColumns(this->imageUnifierProperties);
            double averageRatio = ImagesRatioUtil_getAverage(this->imagesRatioUtil, tempBufferedImageArray, totalImages);
            const char* averageRatioString = Double_toString(averageRatio);
            if (((int32_t) strlen(averageRatioString)) > 4) {
                averageRatioString = java_substring(averageRatioString, 0, 4);
            }
            JTextField_setText(this->avgRatioJTextField, averageRatioString);
            JButton_setEnabled(this->fudgeItJButton, false);
            if (!ImagesRatioUtil_isEqual(this->imagesRatioUtil, tempBufferedImageArray, totalImages)) {
                if (this->isImageFillIn) {
                    JButton_setEnabled(this->fudgeItJButton, true);
                }
            }
            ImageUnifierJPanel_updateImage(this, tempBufferedImageArray);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "updateImage", e);
        } JAVA_END_TRY;
}


static void ImageUnifierJPanel_updateImageWithFudgedImages(ImageUnifierJPanel* this) {
        JAVA_TRY {
            BufferedImage** bufferedImageArray = JAVA_CALL(ImageUnifierJPanel_getImageProcessorInput(this), getBufferedImageArray);
            BufferedImage** tempBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), java_array_length(bufferedImageArray)));
            for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
                ImageIconUnique* indexedImageIcon = ((ImageIconUnique*) JAVA_CALL(JList_getModel(this->imageJList), getElementAt, index));
                BufferedImage* bufferedImage = ImageUtil_createBufferedImage(ImageUtil_getInstance(), bufferedImageArray[ImageIconUnique_getId(indexedImageIcon)], JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(this->imageUnifierProperties), getWidth), JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(this->imageUnifierProperties), getHeight), false);
                tempBufferedImageArray[index] = bufferedImage;
            }
            int32_t totalImages = ImageUnifierProperties_getRows(this->imageUnifierProperties) * ImageUnifierProperties_getColumns(this->imageUnifierProperties);
            double averageRatio = ImagesRatioUtil_getAverage(this->imagesRatioUtil, tempBufferedImageArray, totalImages);
            BufferedImage** fudgedBufferedImageArray = ImagesRatioUtil_fudge(this->imagesRatioUtil, tempBufferedImageArray, totalImages, averageRatio);
            ImageUnifierJPanel_updateImage(this, fudgedBufferedImageArray);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "updateImageWithFudgedImages", e);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
static void ImageUnifierJPanel_updateImage(ImageUnifierJPanel* this, BufferedImage** tempBufferedImageArray) {
        this->result = ImageUnifierUtil_getImage(ImageUnifierUtil_getInstance(), tempBufferedImageArray, this->imageUnifierProperties);
        Icon* image = ImageIcon_new(this->result);
        JLabel* label = JLabel_new(image);
        JAVA_CALL(JScrollPane_getViewport(this->jScrollPane2), add, label);
        ImageUnifierJPanel_updateUI(this);
}


static void ImageUnifierJPanel_updateOnPropertiesChange(ImageUnifierJPanel* this) {
        if (JAVA_CALL(JTextField_getText(this->rowsJTextField), length) > 0 && JAVA_CALL(JTextField_getText(this->columnsJTextField), length) > 0 && JAVA_CALL(JTextField_getText(this->cellWidthJTextField), length) > 0 && JAVA_CALL(JTextField_getText(this->cellHeightJTextField), length) > 0) {
            this->imageUnifierProperties = ImageUnifierProperties_new();
            ImageUnifierProperties_setRows(this->imageUnifierProperties, JTextField_getText(this->rowsJTextField));
            ImageUnifierProperties_setColumns(this->imageUnifierProperties, JTextField_getText(this->columnsJTextField));
            ImageUnifierCell* imageUnifierCell = ImageUnifierCell_new(JTextField_getText(this->cellWidthJTextField), JTextField_getText(this->cellHeightJTextField));
            ImageUnifierProperties_setImageUnifierCell(this->imageUnifierProperties, imageUnifierCell);
            double cellRatio = (((double) ImageUnifierCell_getWidth(imageUnifierCell)) / ImageUnifierCell_getHeight(imageUnifierCell));
            const char* cellRatioString = Double_toString(cellRatio);
            if (((int32_t) strlen(cellRatioString)) > 4) {
                cellRatioString = java_substring(cellRatioString, 0, 4);
            }
            JTextField_setText(this->cellRatioJTextField, cellRatioString);
            ImageUnifierJPanel_updateImage(this);
        }
}


static void ImageUnifierJPanel_initComponents(ImageUnifierJPanel* this) {
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        this->jScrollPane1 = JScrollPane_new();
        this->imageJList = JList_new();
        this->jScrollPane2 = JScrollPane_new();
        this->jPanel1 = JPanel_new();
        this->jButton1 = JButton_new();
        this->upJButton = JButton_new();
        this->downJButton = JButton_new();
        this->fudgeItJButton = JButton_new();
        this->jLabel2 = JLabel_new();
        this->columnsJTextField = JTextField_new();
        this->jLabel1 = JLabel_new();
        this->rowsJTextField = JTextField_new();
        this->jLabel3 = JLabel_new();
        this->cellWidthJTextField = JTextField_new();
        this->jLabel4 = JLabel_new();
        this->cellHeightJTextField = JTextField_new();
        this->jLabel5 = JLabel_new();
        this->cellRatioJTextField = JTextField_new();
        this->jLabel6 = JLabel_new();
        this->avgRatioJTextField = JTextField_new();
        this->jButton2 = JButton_new();
        this->jButtonOrder = JButton_new();
        ImageUnifierJPanel_setMinimumSize(this, Dimension_new(500, 375));
        ImageUnifierJPanel_setPreferredSize(this, Dimension_new(0, 0));
        JList_setMinimumSize(this->imageJList, Dimension_new(50, 0));
        JScrollPane_setViewportView(this->jScrollPane1, this->imageJList);
        JButton_setText(this->jButton1, "Save");
        JButton_addActionListener(this->jButton1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_jButton1ActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->upJButton, "Up");
        JButton_addActionListener(this->upJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_upJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->downJButton, "Down");
        JButton_addActionListener(this->downJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_downJButtonActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->fudgeItJButton, "Fudge It!");
        JButton_addActionListener(this->fudgeItJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_fudgeItJButtonActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel2, "Columns:");
        JTextField_setText(this->columnsJTextField, commonPhoneStrings->TWO);
        JTextField_addActionListener(this->columnsJTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_columnsJTextFieldActionPerformed(this, evt);
        }
#endif
);
        JTextField_addPropertyChangeListener(this->columnsJTextField, PropertyChangeListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_propertyChange(ImageUnifierJPanel* this, PropertyChangeEvent* evt) {
                ImageUnifierJPanel_columnsJTextFieldPropertyChange(this, evt);
        }
#endif
);
        JTextField_addKeyListener(this->columnsJTextField, KeyAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_keyPressed(ImageUnifierJPanel* this, KeyEvent* evt) {
                ImageUnifierJPanel_columnsJTextFieldKeyPressed(this, evt);
        }
            

        void ImageUnifierJPanel_keyTyped(ImageUnifierJPanel* this, KeyEvent* evt) {
                ImageUnifierJPanel_columnsJTextFieldKeyTyped(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel1, "Rows:");
        JTextField_setText(this->rowsJTextField, commonPhoneStrings->TWO);
        JTextField_addActionListener(this->rowsJTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_rowsJTextFieldActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel3, "Cell Width:");
        JTextField_setText(this->cellWidthJTextField, "200");
        JTextField_addActionListener(this->cellWidthJTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_cellWidthJTextFieldActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel4, "Cell Height:");
        JTextField_setText(this->cellHeightJTextField, "150");
        JTextField_addActionListener(this->cellHeightJTextField, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_cellHeightJTextFieldActionPerformed(this, evt);
        }
#endif
);
        JLabel_setText(this->jLabel5, "Cell Ratio:");
        JTextField_setEditable(this->cellRatioJTextField, false);
        JLabel_setText(this->jLabel6, "Avg Image Ratio:");
        JTextField_setEditable(this->avgRatioJTextField, false);
        JButton_setText(this->jButton2, this->commonStrings->UPDATE);
        JButton_addActionListener(this->jButton2, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_jButton2ActionPerformed(this, evt);
        }
#endif
);
        JButton_setText(this->jButtonOrder, "Order");
        JButton_addActionListener(this->jButtonOrder, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageUnifierJPanel_actionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
                ImageUnifierJPanel_jButtonOrderActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* jPanel1Layout = GroupLayout_new(this->jPanel1);
        JPanel_setLayout(this->jPanel1, jPanel1Layout);
        GroupLayout_setHorizontalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addContainerGap), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->jButton1, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->upJButton, javax_swing->GroupLayout->PREFERRED_SIZE, 71, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 10, Short_MAX_VALUE), addComponent, this->downJButton, javax_swing->GroupLayout->PREFERRED_SIZE, 70, javax_swing->GroupLayout->PREFERRED_SIZE)), addComponent, this->fudgeItJButton, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addGroup, javax_swing->GroupLayout->Alignment->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->jLabel3), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 99, javax_swing->GroupLayout->PREFERRED_SIZE)), addGroup, javax_swing->GroupLayout->Alignment->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->jLabel4), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, 96, javax_swing->GroupLayout->PREFERRED_SIZE)), addComponent, this->avgRatioJTextField, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addComponent, this->jLabel6, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addComponent, this->cellRatioJTextField, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addComponent, this->jLabel5, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addComponent, this->cellHeightJTextField, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addComponent, this->cellWidthJTextField, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addComponent, this->jButton2, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE), addGroup, javax_swing->GroupLayout->Alignment->LEADING, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->jLabel2), addComponent, this->jLabel1)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->rowsJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 103, Short_MAX_VALUE), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addComponent, this->columnsJTextField, javax_swing->GroupLayout->DEFAULT_SIZE, 102, Short_MAX_VALUE), addGap, 1, 1, 1)))), addComponent, this->jButtonOrder, javax_swing->GroupLayout->DEFAULT_SIZE, 151, Short_MAX_VALUE)), addContainerGap)));
        GroupLayout_setVerticalGroup(jPanel1Layout, JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(jPanel1Layout), addContainerGap), addComponent, this->jButton1), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->upJButton), addComponent, this->downJButton)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jButtonOrder), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->fudgeItJButton), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel2), addComponent, this->columnsJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(jPanel1Layout, javax_swing->GroupLayout->Alignment->BASELINE), addComponent, this->jLabel1), addComponent, this->rowsJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE)), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel3), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->cellWidthJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel4), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->cellHeightJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jButton2), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jLabel5), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE), addComponent, this->cellRatioJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addGap, 7, 7, 7), addComponent, this->jLabel6), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->avgRatioJTextField, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addGap, 66, 66, 66)));
        GroupLayout* layout = GroupLayout_new(this);
        ImageUnifierJPanel_setLayout(this, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addComponent, this->jScrollPane1, javax_swing->GroupLayout->PREFERRED_SIZE, 84, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jPanel1, javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE), addPreferredGap, javax_swing->LayoutStyle->ComponentPlacement->RELATED), addComponent, this->jScrollPane2, javax_swing->GroupLayout->DEFAULT_SIZE, 527, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, javax_swing->GroupLayout->Alignment->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(layout), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->TRAILING), addComponent, this->jPanel1, javax_swing->GroupLayout->Alignment->LEADING, 0, 445, Short_MAX_VALUE), addComponent, this->jScrollPane2, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 445, Short_MAX_VALUE), addComponent, this->jScrollPane1, javax_swing->GroupLayout->Alignment->LEADING, javax_swing->GroupLayout->DEFAULT_SIZE, 445, Short_MAX_VALUE)), addContainerGap)));
}


static void ImageUnifierJPanel_jButton2ActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        ImageUnifierJPanel_updateOnPropertiesChange(this);
}


static void ImageUnifierJPanel_columnsJTextFieldKeyPressed(ImageUnifierJPanel* this, KeyEvent* evt) {
}


static void ImageUnifierJPanel_columnsJTextFieldKeyTyped(ImageUnifierJPanel* this, KeyEvent* evt) {
}


static void ImageUnifierJPanel_columnsJTextFieldPropertyChange(ImageUnifierJPanel* this, PropertyChangeEvent* evt) {
}


static void ImageUnifierJPanel_fudgeItJButtonActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        ImageUnifierJPanel_updateImageWithFudgedImages(this);
}


static void ImageUnifierJPanel_cellHeightJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        ImageUnifierJPanel_updateOnPropertiesChange(this);
}


static void ImageUnifierJPanel_cellWidthJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        ImageUnifierJPanel_updateOnPropertiesChange(this);
}


static void ImageUnifierJPanel_columnsJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        ImageUnifierJPanel_updateOnPropertiesChange(this);
}


static void ImageUnifierJPanel_rowsJTextFieldActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        ImageUnifierJPanel_updateOnPropertiesChange(this);
}


static void ImageUnifierJPanel_jButton1ActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        JAVA_TRY {
            File** fileArray = ImageProcessorInput_getFiles(this->imageProcessorInput);
            File* file = fileArray[0];
            const char* filePath = File_getAbsolutePath(file);
            int32_t extensionIndex = java_string_indexOf(filePath, this->imageStrings->PNG_EXTENSION);
            filePath = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_substring(filePath, 0, extensionIndex)), append, CommonSeps_getInstance()->UNDERSCORE), appendint, ((int32_t) ImageUnifierProperties_getColumns(this->imageUnifierProperties))), append, "_By_"), appendint, ((int32_t) ImageUnifierProperties_getRows(this->imageUnifierProperties))), append, "_Unified"), append, this->imageStrings->PNG_EXTENSION), toString);
            LogUtil_putF(this->logUtil, java_concat("New File Path: ", filePath), this, StringUtil_getInstance()->EMPTY_STRING);
            File* outputFile = File_new(filePath);
            ImagePersistanceUtil_saveWithBatik(ImagePersistanceUtil_getInstance(), FileWrapperUtil_wrapFile(outputFile), this->result);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "jButton1ActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageUnifierJPanel_downJButtonActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        int32_t index = JList_getSelectedIndex(this->imageJList);
        DefaultListModel* defaultListModel = ((DefaultListModel*) JList_getModel(this->imageJList));
        if (index >= 0 && index + 1 < DefaultListModel_size(defaultListModel)) {
            ImageIconUnique* indexedImageIcon = ((ImageIconUnique*) DefaultListModel_remove(defaultListModel, index));
            DefaultListModel_insertElementAt(defaultListModel, indexedImageIcon, index + 1);
            JList_setSelectedIndex(this->imageJList, index + 1);
            ImageUnifierJPanel_updateImage(this);
        }
}


static void ImageUnifierJPanel_upJButtonActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        int32_t index = JList_getSelectedIndex(this->imageJList);
        if (index > 0) {
            DefaultListModel* defaultListModel = ((DefaultListModel*) JList_getModel(this->imageJList));
            ImageIconUnique* indexedImageIcon = ((ImageIconUnique*) DefaultListModel_remove(defaultListModel, index));
            DefaultListModel_insertElementAt(defaultListModel, indexedImageIcon, index - 1);
            JList_setSelectedIndex(this->imageJList, index - 1);
            ImageUnifierJPanel_updateImage(this);
        }
}


static void ImageUnifierJPanel_jButtonOrderActionPerformed(ImageUnifierJPanel* this, ActionEvent* evt) {
        DefaultListModel* defaultListModel = ((DefaultListModel*) JList_getModel(this->imageJList));
        int32_t size = DefaultListModel_size(defaultListModel);
        int32_t last = size - 1;
        for (int32_t index = last; index >= 0; index--) {
            ImageIconUnique* indexedImageIcon = ((ImageIconUnique*) DefaultListModel_remove(defaultListModel, last));
            DefaultListModel_insertElementAt(defaultListModel, indexedImageIcon, last - index);
        }
        if (size > 0) {
            JList_setSelectedIndex(this->imageJList, 0);
            ImageUnifierJPanel_updateImage(this);
        }
}


ImageProcessorInput* ImageUnifierJPanel_getImageProcessorInput(ImageUnifierJPanel* this) {
        return this->imageProcessorInput;
}


void ImageUnifierJPanel_setImageProcessorInput(ImageUnifierJPanel* this, ImageProcessorInput* imageProcessorInput) {
        this->imageProcessorInput = imageProcessorInput;
        ImageUnifierJPanel_init(this);
}

