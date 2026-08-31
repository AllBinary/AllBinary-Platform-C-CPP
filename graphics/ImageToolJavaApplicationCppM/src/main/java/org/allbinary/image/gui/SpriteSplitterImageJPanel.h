
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/image/ImageProcessedVisitor.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/SpriteSplitterUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JCheckBox.h"
#include "JTextField.h"
#include "JLabel.h"
#include "Graphics.h"
#include "JButton.h"
#include "JComboBox.h"
#include "DefaultComboBoxModel.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class SpriteSplitterImageJPanel: public javax.swing.JPanel: public ImageProcessedVisitor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: result: BufferedImage;

public constructor (ImageProcessorInput imageProcessorInput);

    public process();

    initComponents();

    writeOverOriginalJCheckBoxActionPerformed(java.awt.event.ActionEvent evt);

    generateJButtonActionPerformed(java.awt.event.ActionEvent evt);

    spriteTypeJComboBoxActionPerformed(java.awt.event.ActionEvent evt);

    totalAnimationsJComboBoxActionPerformed(java.awt.event.ActionEvent evt);

    totalFramesJComboBoxActionPerformed(java.awt.event.ActionEvent evt);

    widthReductionTextFieldActionPerformed(java.awt.event.ActionEvent evt);

    increaseWidthTextFieldActionPerformed(java.awt.event.ActionEvent evt);

    private: generateJButton: javax.swing.JButton;

    private: heightReductionTextField: javax.swing.JTextField;

    private: increaseHeightTextField: javax.swing.JTextField;

    private: increaseWidthTextField: javax.swing.JTextField;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jLabel4: javax.swing.JLabel;

    private: jLabel5: javax.swing.JLabel;

    private: jLabel6: javax.swing.JLabel;

    private: jLabel7: javax.swing.JLabel;

    private: jLabel8: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: jPanel2: javax.swing.JPanel;

    private: spriteTypeJComboBox: javax.swing.JComboBox<string>;

    private: totalAnimationsJComboBox: javax.swing.JComboBox<string>;

    private: totalFramesJComboBox: javax.swing.JComboBox<string>;

    private: widthReductionTextField: javax.swing.JTextField;

    private: writeOverOriginalJCheckBox: javax.swing.JCheckBox;

    public ImageProcessorInput getImageProcessorInput();

    public setImageProcessorInput(ImageProcessorInput imageProcessorInput);

                //@Throws(IOException.constructor)
            
    public visit(BufferedImage generatedBufferedImage, string name, int32_t index);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_H
