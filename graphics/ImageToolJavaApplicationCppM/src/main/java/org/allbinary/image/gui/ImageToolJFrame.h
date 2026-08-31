
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <java/util/Arrays.h>

      
#include <java/util/Comparator.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/gui/dialog/FileJDialog.h>

      
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysis.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JFrame.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JTextField.h"
#include "JButton.h"
#include "JPanel.h"
#include "JMenuBar.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "GridLayout.h"
#include "ImageUnifierJPanel.h"
#include "ImageAnalysisResultsJPanel.h"
#include "RotationSpriteImageJPanel.h"
#include "SpriteSplitterImageJPanel.h"
#include "RotationImageJPanel.h"
#include "ResizeImageJPanel.h"
#include "CreateIconImagesJPanel.h"
#include "CanvasImageJPanel.h"
#include "MirrorSpriteImageJPanel.h"
#include "MirrorImageJPanel.h"

class ImageToolJFrame: public javax.swing.JFrame: public FileJDialogListenerInterface {
        

    private: static imageProcessorInputCompositeInterface: ImageProcessorInputCompositeInterface;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: fileJDialog: FileJDialog;

    private: imageProcessorInput: ImageProcessorInput;

public constructor ();

    initComponents();

    createStripImageJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    processingJMenuActionPerformed(java.awt.event.ActionEvent evt);

    openImageJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    public onFiles(std::vector<File> files);

    fileJMenuActionPerformed(java.awt.event.ActionEvent evt);

    analyzeJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    generateRotationSpriteJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    generateSpriteSplitterMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    generateRotationMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    scaleImagesJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    createIconsJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    canvasImagesJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    generateMirrorSpriteMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    mirrorJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    ColorRangeInterface getColorRangeInterface();

    public javax.swing.JTextField getMaxBlueJTextField();

    public setMaxBlueJTextField(javax.swing.JTextField maxBlueJTextField);

    public javax.swing.JTextField getMaxGreenJTextField();

    public setMaxGreenJTextField(javax.swing.JTextField maxGreenJTextField);

    public javax.swing.JTextField getMaxRedJTextField();

    public setMaxRedJTextField(javax.swing.JTextField maxRedJTextField);

    public javax.swing.JTextField getMinBlueJTextField();

    public setMinBlueJTextField(javax.swing.JTextField minBlueJTextField);

    public javax.swing.JTextField getMinGreenJTextField();

    public setMinGreenJTextField(javax.swing.JTextField minGreenJTextField);

    public javax.swing.JTextField getMinRedJTextField();

    public setMinRedJTextField(javax.swing.JTextField minRedJTextField);

    private: analysisActionJDialog: javax.swing.JDialog;

    private: analyzeJMenuItem: javax.swing.JMenuItem;

    private: blueJLabel: javax.swing.JLabel;

    private: colorRangeJLabel: javax.swing.JLabel;

    private: createStripImageJMenuItem: javax.swing.JMenuItem;

    private: fileJMenu: javax.swing.JMenu;

    private: generateSpriteSplitterMenuItem: javax.swing.JMenuItem;

    private: generateRotationMenuItem: javax.swing.JMenuItem;

    private: generateMirrorSpriteMenuItem: javax.swing.JMenuItem;

    private: generateRotationSpriteJMenuItem: javax.swing.JMenuItem;

    private: greenJLabel: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: mainJMenuBar: javax.swing.JMenuBar;

    private: maxBlueJTextField: javax.swing.JTextField;

    private: maxGreenJTextField: javax.swing.JTextField;

    private: maxJLabel: javax.swing.JLabel;

    private: maxRedJTextField: javax.swing.JTextField;

    private: minBlueJTextField: javax.swing.JTextField;

    private: minGreenJTextField: javax.swing.JTextField;

    private: minJLabel: javax.swing.JLabel;

    private: minRedJTextField: javax.swing.JTextField;

    private: mirrorJMenuItem: javax.swing.JMenuItem;

    private: okJButton: javax.swing.JButton;

    private: openImageJMenuItem: javax.swing.JMenuItem;

    private: processingJMenu: javax.swing.JMenu;

    private: redJLabel: javax.swing.JLabel;

    private: scaleImagesJMenuItem: javax.swing.JMenuItem;

    private: canvasImagesJMenuItem: javax.swing.JMenuItem;

    private: createIconImagesJMenuItem: javax.swing.JMenuItem;

    private: titleJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_H
