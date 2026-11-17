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
// #include "java/util/Arrays.h"
// #include "java/util/Comparator.h"
// #include "javax/imageio/ImageIO.h"
#include "org/allbinary/gui/dialog/FileJDialog.h"
#include "org/allbinary/gui/dialog/FileJDialogListenerInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessorInputCompositeInterface.h"
#include "org/allbinary/media/image/analysis/ColorRange.h"
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#include "org/allbinary/media/image/analysis/ImageAnalysis.h"
#include "org/allbinary/media/image/analysis/ImageAnalysisResults.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/image/gui/JFrame.h"

typedef struct ImageToolJFrame ImageToolJFrame;
struct ImageToolJFrame {
    JFrame base;
    FileJDialogListenerInterface FileJDialogListenerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    FileJDialog* fileJDialog;
    ImageProcessorInput* imageProcessorInput;
    JDialog* analysisActionJDialog;
    JMenuItem* analyzeJMenuItem;
    JLabel* blueJLabel;
    JLabel* colorRangeJLabel;
    JMenuItem* createStripImageJMenuItem;
    JMenu* fileJMenu;
    JMenuItem* generateSpriteSplitterMenuItem;
    JMenuItem* generateRotationMenuItem;
    JMenuItem* generateMirrorSpriteMenuItem;
    JMenuItem* generateRotationSpriteJMenuItem;
    JLabel* greenJLabel;
    JPanel* jPanel1;
    JMenuBar* mainJMenuBar;
    JTextField* maxBlueJTextField;
    JTextField* maxGreenJTextField;
    JLabel* maxJLabel;
    JTextField* maxRedJTextField;
    JTextField* minBlueJTextField;
    JTextField* minGreenJTextField;
    JLabel* minJLabel;
    JTextField* minRedJTextField;
    JMenuItem* mirrorJMenuItem;
    JButton* okJButton;
    JMenuItem* openImageJMenuItem;
    JMenu* processingJMenu;
    JLabel* redJLabel;
    JMenuItem* scaleImagesJMenuItem;
    JMenuItem* canvasImagesJMenuItem;
    JMenuItem* createIconImagesJMenuItem;
    JLabel* titleJLabel;
};

static ImageProcessorInputCompositeInterface* ImageToolJFrame_imageProcessorInputCompositeInterface = nullptr;

ImageToolJFrame* ImageToolJFrame_new(void);

void ImageToolJFrame_init(ImageToolJFrame* this);
static void ImageToolJFrame_initComponents(ImageToolJFrame* this);
static void ImageToolJFrame_createStripImageJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_okJButtonActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_processingJMenuActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_openImageJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
void ImageToolJFrame_onFiles(ImageToolJFrame* this, File** files);
static void ImageToolJFrame_fileJMenuActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_analyzeJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_generateRotationSpriteJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_generateSpriteSplitterMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_generateRotationMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_scaleImagesJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_createIconsJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_canvasImagesJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_generateMirrorSpriteMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static void ImageToolJFrame_mirrorJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt);
static ColorRangeInterface* ImageToolJFrame_getColorRangeInterface(ImageToolJFrame* this);
JTextField* ImageToolJFrame_getMaxBlueJTextField(ImageToolJFrame* this);
void ImageToolJFrame_setMaxBlueJTextField(ImageToolJFrame* this, JTextField* maxBlueJTextField);
JTextField* ImageToolJFrame_getMaxGreenJTextField(ImageToolJFrame* this);
void ImageToolJFrame_setMaxGreenJTextField(ImageToolJFrame* this, JTextField* maxGreenJTextField);
JTextField* ImageToolJFrame_getMaxRedJTextField(ImageToolJFrame* this);
void ImageToolJFrame_setMaxRedJTextField(ImageToolJFrame* this, JTextField* maxRedJTextField);
JTextField* ImageToolJFrame_getMinBlueJTextField(ImageToolJFrame* this);
void ImageToolJFrame_setMinBlueJTextField(ImageToolJFrame* this, JTextField* minBlueJTextField);
JTextField* ImageToolJFrame_getMinGreenJTextField(ImageToolJFrame* this);
void ImageToolJFrame_setMinGreenJTextField(ImageToolJFrame* this, JTextField* minGreenJTextField);
JTextField* ImageToolJFrame_getMinRedJTextField(ImageToolJFrame* this);
void ImageToolJFrame_setMinRedJTextField(ImageToolJFrame* this, JTextField* minRedJTextField);

static void ImageToolJFrame_initFields(ImageToolJFrame* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->imageProcessorInput = nullptr;
    this->analysisActionJDialog = nullptr;
    this->analyzeJMenuItem = nullptr;
    this->blueJLabel = nullptr;
    this->colorRangeJLabel = nullptr;
    this->createStripImageJMenuItem = nullptr;
    this->fileJMenu = nullptr;
    this->generateSpriteSplitterMenuItem = nullptr;
    this->generateRotationMenuItem = nullptr;
    this->generateMirrorSpriteMenuItem = nullptr;
    this->generateRotationSpriteJMenuItem = nullptr;
    this->greenJLabel = nullptr;
    this->jPanel1 = nullptr;
    this->mainJMenuBar = nullptr;
    this->maxBlueJTextField = nullptr;
    this->maxGreenJTextField = nullptr;
    this->maxJLabel = nullptr;
    this->maxRedJTextField = nullptr;
    this->minBlueJTextField = nullptr;
    this->minGreenJTextField = nullptr;
    this->minJLabel = nullptr;
    this->minRedJTextField = nullptr;
    this->mirrorJMenuItem = nullptr;
    this->okJButton = nullptr;
    this->openImageJMenuItem = nullptr;
    this->processingJMenu = nullptr;
    this->redJLabel = nullptr;
    this->scaleImagesJMenuItem = nullptr;
    this->canvasImagesJMenuItem = nullptr;
    this->createIconImagesJMenuItem = nullptr;
    this->titleJLabel = nullptr;
}


void ImageToolJFrame_init(ImageToolJFrame* this) {
    JFrame_init(&this->base);
    ImageToolJFrame_initFields(this);
        ImageToolJFrame_initComponents(this);
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        ImageToolJFrame_setSize(this, 640, 480);
        JAVA_CALL(ImageToolJFrame_getMaxRedJTextField(this), setText, "255");
        JAVA_CALL(ImageToolJFrame_getMaxGreenJTextField(this), setText, "255");
        JAVA_CALL(ImageToolJFrame_getMaxBlueJTextField(this), setText, "255");
        JAVA_CALL(ImageToolJFrame_getMinRedJTextField(this), setText, commonPhoneStrings->ZERO);
        JAVA_CALL(ImageToolJFrame_getMinGreenJTextField(this), setText, commonPhoneStrings->ZERO);
        JAVA_CALL(ImageToolJFrame_getMinBlueJTextField(this), setText, commonPhoneStrings->ZERO);
        this->fileJDialog = FileJDialog_new();
        FileJDialog_addFinishedListener(this->fileJDialog, this);
}

ImageToolJFrame* ImageToolJFrame_new(void) {
    ImageToolJFrame* this = calloc(1, sizeof(ImageToolJFrame));
    ImageToolJFrame_init(this);
    return this;
}


static void ImageToolJFrame_initComponents(ImageToolJFrame* this) {
        this->analysisActionJDialog = JDialog_new();
        this->titleJLabel = JLabel_new();
        this->colorRangeJLabel = JLabel_new();
        this->redJLabel = JLabel_new();
        this->minJLabel = JLabel_new();
        this->maxJLabel = JLabel_new();
        this->greenJLabel = JLabel_new();
        this->blueJLabel = JLabel_new();
        this->minRedJTextField = JTextField_new();
        this->maxRedJTextField = JTextField_new();
        this->maxGreenJTextField = JTextField_new();
        this->minBlueJTextField = JTextField_new();
        this->maxBlueJTextField = JTextField_new();
        this->okJButton = JButton_new();
        this->minGreenJTextField = JTextField_new();
        this->jPanel1 = JPanel_new();
        this->mainJMenuBar = JMenuBar_new();
        this->fileJMenu = JMenu_new();
        this->openImageJMenuItem = JMenuItem_new();
        this->processingJMenu = JMenu_new();
        this->analyzeJMenuItem = JMenuItem_new();
        this->generateSpriteSplitterMenuItem = JMenuItem_new();
        this->generateRotationMenuItem = JMenuItem_new();
        this->generateMirrorSpriteMenuItem = JMenuItem_new();
        this->generateRotationSpriteJMenuItem = JMenuItem_new();
        this->createStripImageJMenuItem = JMenuItem_new();
        this->mirrorJMenuItem = JMenuItem_new();
        this->scaleImagesJMenuItem = JMenuItem_new();
        this->canvasImagesJMenuItem = JMenuItem_new();
        this->createIconImagesJMenuItem = JMenuItem_new();
        JDialog_setMinimumSize(this->analysisActionJDialog, Dimension_new(350, 250));
        JLabel_setText(this->titleJLabel, "              Color At Action Options            ");
        JLabel_setText(this->colorRangeJLabel, "Color Range");
        JLabel_setText(this->redJLabel, "Red:");
        JLabel_setText(this->minJLabel, "Minimum");
        JLabel_setText(this->maxJLabel, "Maximum");
        JLabel_setText(this->greenJLabel, "Green:");
        JLabel_setText(this->blueJLabel, "Blue:");
        JButton_setText(this->okJButton, "OK");
        JButton_addActionListener(this->okJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_okJButtonActionPerformed(this, evt);
        }
#endif
);
        GroupLayout* analysisActionJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->analysisActionJDialog));
        JAVA_CALL(JDialog_getContentPane(this->analysisActionJDialog), setLayout, analysisActionJDialogLayout);
        GroupLayout_setHorizontalGroup(analysisActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(analysisActionJDialogLayout), addContainerGap), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(analysisActionJDialogLayout), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->LEADING), add, this->blueJLabel), add, this->greenJLabel), add, this->redJLabel), add, this->colorRangeJLabel)), add, 29, 29, 29), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->LEADING), add, org_jdesktop->layout->GroupLayout->TRAILING, this->minJLabel, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, 58, Short_MAX_VALUE), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->TRAILING, false), add, org_jdesktop->layout->GroupLayout->LEADING, this->minBlueJTextField), add, org_jdesktop->layout->GroupLayout->LEADING, this->minGreenJTextField), add, org_jdesktop->layout->GroupLayout->LEADING, this->minRedJTextField, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, 42, Short_MAX_VALUE), add, org_jdesktop->layout->GroupLayout->LEADING, this->okJButton))), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->TRAILING), add, org_jdesktop->layout->GroupLayout->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(analysisActionJDialogLayout), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->TRAILING, false), add, org_jdesktop->layout->GroupLayout->LEADING, this->maxRedJTextField), add, org_jdesktop->layout->GroupLayout->LEADING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(analysisActionJDialogLayout), add, 1, 1, 1), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->LEADING), add, this->maxBlueJTextField), add, this->maxGreenJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, 43, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE)))), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED, 17, Short_MAX_VALUE)), add, org_jdesktop->layout->GroupLayout->LEADING, this->maxJLabel, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, 61, Short_MAX_VALUE)), addContainerGap)), add, org_jdesktop->layout->GroupLayout->TRAILING, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(analysisActionJDialogLayout), add, this->titleJLabel), add, 25, 25, 25)))));
        GroupLayout_setVerticalGroup(analysisActionJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->LEADING), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(analysisActionJDialogLayout), add, this->titleJLabel), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->BASELINE), add, this->minJLabel), add, this->colorRangeJLabel), add, this->maxJLabel)), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->TRAILING), add, this->redJLabel), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->BASELINE), add, this->minRedJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), add, this->maxRedJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE))), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->TRAILING), add, this->greenJLabel), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->BASELINE), add, this->minGreenJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), add, this->maxGreenJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE))), addPreferredGap, org_jdesktop->layout->LayoutStyle->RELATED), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->TRAILING), add, this->blueJLabel), add, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(analysisActionJDialogLayout, org_jdesktop->layout->GroupLayout->BASELINE), add, this->minBlueJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE), add, this->maxBlueJTextField, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, org_jdesktop->layout->GroupLayout->PREFERRED_SIZE))), add, 16, 16, 16), add, this->okJButton), addContainerGap, org_jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        ImageToolJFrame_setDefaultCloseOperation(this, javax_swing->WindowConstants->EXIT_ON_CLOSE);
        JAVA_CALL(ImageToolJFrame_getContentPane(this), setLayout, GridLayout_new(1, 0));
        JPanel_setLayout(this->jPanel1, GridLayout_new(1, 0));
        JAVA_CALL(ImageToolJFrame_getContentPane(this), add, this->jPanel1);
        JMenu_setText(this->fileJMenu, "File");
        JMenu_addActionListener(this->fileJMenu, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_fileJMenuActionPerformed(this, evt);
        }
#endif
);
        JMenuItem_setText(this->openImageJMenuItem, "Open");
        JMenuItem_addActionListener(this->openImageJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_openImageJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->fileJMenu, this->openImageJMenuItem);
        JMenuBar_add(this->mainJMenuBar, this->fileJMenu);
        JMenu_setText(this->processingJMenu, "Processing");
        JMenu_addActionListener(this->processingJMenu, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_processingJMenuActionPerformed(this, evt);
        }
#endif
);
        JMenuItem_setText(this->analyzeJMenuItem, "Image Analyze");
        JMenuItem_addActionListener(this->analyzeJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_analyzeJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->analyzeJMenuItem);
        JMenuItem_setText(this->generateMirrorSpriteMenuItem, "Mirror Sprite Generator");
        JMenuItem_addActionListener(this->generateMirrorSpriteMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_generateMirrorSpriteMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->generateMirrorSpriteMenuItem);
        JMenuItem_setText(this->generateRotationSpriteJMenuItem, "Rotation Sprite Generator");
        JMenuItem_addActionListener(this->generateRotationSpriteJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_generateRotationSpriteJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->generateRotationSpriteJMenuItem);
        JMenuItem_setText(this->generateSpriteSplitterMenuItem, "Sprite Splitter Generator");
        JMenuItem_addActionListener(this->generateSpriteSplitterMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_generateSpriteSplitterMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->generateSpriteSplitterMenuItem);
        JMenuItem_setText(this->generateRotationMenuItem, "Rotate Image Generator");
        JMenuItem_addActionListener(this->generateRotationMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_generateRotationMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->generateRotationMenuItem);
        JMenuItem_setText(this->createStripImageJMenuItem, "Multi Image Unifier");
        JMenuItem_addActionListener(this->createStripImageJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_createStripImageJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->createStripImageJMenuItem);
        JMenuItem_setText(this->mirrorJMenuItem, "Mirror Image(s)");
        JMenuItem_addActionListener(this->mirrorJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_mirrorJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->mirrorJMenuItem);
        JMenuItem_setText(this->scaleImagesJMenuItem, "Scale Image(s)");
        JMenuItem_addActionListener(this->scaleImagesJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_scaleImagesJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->scaleImagesJMenuItem);
        JMenuItem_setText(this->canvasImagesJMenuItem, "Canvas Image(s)");
        JMenuItem_addActionListener(this->canvasImagesJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_canvasImagesJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->canvasImagesJMenuItem);
        JMenuItem_setText(this->createIconImagesJMenuItem, "Create Icon Image(s)");
        JMenuItem_addActionListener(this->createIconImagesJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageToolJFrame_actionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
                ImageToolJFrame_createIconsJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->createIconImagesJMenuItem);
        JMenuBar_add(this->mainJMenuBar, this->processingJMenu);
        ImageToolJFrame_setJMenuBar(this, this->mainJMenuBar);
        ImageToolJFrame_pack(this);
}


static void ImageToolJFrame_createStripImageJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            ImageUnifierJPanel* imageUnifierJPanel = ImageUnifierJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, imageUnifierJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = imageUnifierJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "createStripImageJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_okJButtonActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "okJButtonActionPerformed");
            ImageAnalysisResults** imageAnalysisResultsArray = ImageAnalysis_process(ImageAnalysis_getInstance(), ImageProcessorInput_getBufferedImageArray(this->imageProcessorInput), ImageToolJFrame_getColorRangeInterface(this));
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, ImageAnalysisResultsJPanel_new(imageAnalysisResultsArray));
            JPanel_updateUI(this->jPanel1);
            JDialog_setVisible(this->analysisActionJDialog, false);
            ImageToolJFrame_imageProcessorInputCompositeInterface = nullptr;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "okJButtonActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_processingJMenuActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
}


static void ImageToolJFrame_openImageJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "openImageJMenuItemActionPerformed");
            FileJDialog_setVisible(this->fileJDialog, true);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "openImageJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


void ImageToolJFrame_onFiles(ImageToolJFrame* this, File** files) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_concat(java_concat("Reading ", java_string_of(java_array_length(files))), " files."), this, "onFiles");
            Arrays_sort(files, Comparator_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
                

            int32_t ImageToolJFrame_compare(ImageToolJFrame* this, File* file1, File* file2) {
                    int32_t fileNameIndexValue1 = ImageToolJFrame_extractIndexNumberIfAnyFromFileName(this, File_getName(file1));
                    int32_t fileNameIndexValue2 = ImageToolJFrame_extractIndexNumberIfAnyFromFileName(this, File_getName(file2));
                    return fileNameIndexValue1 - fileNameIndexValue2;
            }
                

            static int32_t ImageToolJFrame_extractIndexNumberIfAnyFromFileName(ImageToolJFrame* this, const char* name) {
                    int32_t i = 0;
                    JAVA_TRY {
                        int32_t start = java_string_lastIndexOf(name, u'_') + 1;
                        int32_t end = java_string_lastIndexOf(name, u'.');
                        const char* number = java_substring(name, start, end);
                        i = ((int32_t) strtol(number, nullptr, 10));
                    } JAVA_CATCH(Exception, e) {
                        i = 0;
                    } JAVA_END_TRY;
                    return i;
            }
#endif
);
            BufferedImage** bufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), java_array_length(files)));
            for (int32_t index = 0; index < java_array_length(files); index++) {
                bufferedImageArray[index] = ImageIO_read(files[index]);
                if (bufferedImageArray[index] == nullptr) {
                    java_throw(java_exception_new("Exception", java_concat("Unable to read file: ", java_string_of(JAVA_CALL(files[index], getPath)))));
                }
            }
            this->imageProcessorInput = ImageProcessorInput_new(files, bufferedImageArray);
            FileJDialog_setVisible(this->fileJDialog, false);
            if (ImageToolJFrame_imageProcessorInputCompositeInterface != nullptr) {
                JAVA_CALL(ImageToolJFrame_imageProcessorInputCompositeInterface, setImageProcessorInput, this->imageProcessorInput);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onFiles", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_fileJMenuActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
}


static void ImageToolJFrame_analyzeJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "analyzeJMenuItemActionPerformed");
            JDialog_setVisible(this->analysisActionJDialog, true);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "analyzeJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_generateRotationSpriteJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
            RotationSpriteImageJPanel* spriteImageJPanel = RotationSpriteImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, spriteImageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = spriteImageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateRotationSpriteJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_generateSpriteSplitterMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
            SpriteSplitterImageJPanel* imageJPanel = SpriteSplitterImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, imageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = imageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateRotationMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_generateRotationMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
            RotationImageJPanel* rotationImageJPanel = RotationImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, rotationImageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = rotationImageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateRotationMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_scaleImagesJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "scaleImagesJMenuItemActionPerformed");
            ResizeImageJPanel* resizeImageJPanel = ResizeImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, resizeImageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = resizeImageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_createIconsJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "createIconsJMenuItemActionPerformed");
            CreateIconImagesJPanel* createIconImagesJPanel = CreateIconImagesJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, createIconImagesJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = createIconImagesJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_canvasImagesJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "canvasImagesJMenuItemActionPerformed");
            CanvasImageJPanel* resizeImageJPanel = CanvasImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, resizeImageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = resizeImageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_generateMirrorSpriteMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "generateMirrorSpriteJMenuItemActionPerformed");
            MirrorSpriteImageJPanel* spriteImageJPanel = MirrorSpriteImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, spriteImageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = spriteImageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateMirrorSpriteJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void ImageToolJFrame_mirrorJMenuItemActionPerformed(ImageToolJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "generateMirrorJMenuItemActionPerformed");
            MirrorImageJPanel* mirrorImageJPanel = MirrorImageJPanel_new(this->imageProcessorInput);
            JPanel_removeAll(this->jPanel1);
            JPanel_add(this->jPanel1, mirrorImageJPanel);
            JPanel_updateUI(this->jPanel1);
            ImageToolJFrame_imageProcessorInputCompositeInterface = mirrorImageJPanel;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "generateMirrorJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static ColorRangeInterface* ImageToolJFrame_getColorRangeInterface(ImageToolJFrame* this) {
        ColorRangeInterface* colorRangeInterface = ((ColorRangeInterface*) ColorRange_new());
        ColorRangeInterface_setMinRed(colorRangeInterface, Integer_intValue(JAVA_CALL(ImageToolJFrame_getMinRedJTextField(this), getText)));
        ColorRangeInterface_setMaxRed(colorRangeInterface, Integer_intValue(JAVA_CALL(ImageToolJFrame_getMaxRedJTextField(this), getText)));
        ColorRangeInterface_setMinGreen(colorRangeInterface, Integer_intValue(JAVA_CALL(ImageToolJFrame_getMinGreenJTextField(this), getText)));
        ColorRangeInterface_setMaxGreen(colorRangeInterface, Integer_intValue(JAVA_CALL(ImageToolJFrame_getMaxGreenJTextField(this), getText)));
        ColorRangeInterface_setMinBlue(colorRangeInterface, Integer_intValue(JAVA_CALL(ImageToolJFrame_getMinBlueJTextField(this), getText)));
        ColorRangeInterface_setMaxBlue(colorRangeInterface, Integer_intValue(JAVA_CALL(ImageToolJFrame_getMaxBlueJTextField(this), getText)));
        return colorRangeInterface;
}


JTextField* ImageToolJFrame_getMaxBlueJTextField(ImageToolJFrame* this) {
        return this->maxBlueJTextField;
}


void ImageToolJFrame_setMaxBlueJTextField(ImageToolJFrame* this, JTextField* maxBlueJTextField) {
        this->maxBlueJTextField = this->maxBlueJTextField;
}


JTextField* ImageToolJFrame_getMaxGreenJTextField(ImageToolJFrame* this) {
        return this->maxGreenJTextField;
}


void ImageToolJFrame_setMaxGreenJTextField(ImageToolJFrame* this, JTextField* maxGreenJTextField) {
        this->maxGreenJTextField = this->maxGreenJTextField;
}


JTextField* ImageToolJFrame_getMaxRedJTextField(ImageToolJFrame* this) {
        return this->maxRedJTextField;
}


void ImageToolJFrame_setMaxRedJTextField(ImageToolJFrame* this, JTextField* maxRedJTextField) {
        this->maxRedJTextField = this->maxRedJTextField;
}


JTextField* ImageToolJFrame_getMinBlueJTextField(ImageToolJFrame* this) {
        return this->minBlueJTextField;
}


void ImageToolJFrame_setMinBlueJTextField(ImageToolJFrame* this, JTextField* minBlueJTextField) {
        this->minBlueJTextField = this->minBlueJTextField;
}


JTextField* ImageToolJFrame_getMinGreenJTextField(ImageToolJFrame* this) {
        return this->minGreenJTextField;
}


void ImageToolJFrame_setMinGreenJTextField(ImageToolJFrame* this, JTextField* minGreenJTextField) {
        this->minGreenJTextField = this->minGreenJTextField;
}


JTextField* ImageToolJFrame_getMinRedJTextField(ImageToolJFrame* this) {
        return this->minRedJTextField;
}


void ImageToolJFrame_setMinRedJTextField(ImageToolJFrame* this, JTextField* minRedJTextField) {
        this->minRedJTextField = this->minRedJTextField;
}

