
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
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
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JComboBox.h"
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"

class SpriteSplitterImageJPanel: public javax::swing::JPanel, public ImageProcessedVisitor {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: ImageStrings* imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput* imageProcessorInput;

    private: BufferedImage* result;

public: SpriteSplitterImageJPanel(ImageProcessorInput* imageProcessorInput);

    public: void process();

    private: void initComponents();

    private: void writeOverOriginalJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void spriteTypeJComboBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void totalAnimationsJComboBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void totalFramesJComboBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void widthReductionTextFieldActionPerformed(java::awt::event::ActionEvent* evt);

    private: void increaseWidthTextFieldActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* generateJButton;

    private: javax::swing::JTextField* heightReductionTextField;

    private: javax::swing::JTextField* increaseHeightTextField;

    private: javax::swing::JTextField* increaseWidthTextField;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JLabel* jLabel4;

    private: javax::swing::JLabel* jLabel5;

    private: javax::swing::JLabel* jLabel6;

    private: javax::swing::JLabel* jLabel7;

    private: javax::swing::JLabel* jLabel8;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JPanel* jPanel2;

    private: javax::swing::JComboBox<std::string>* spriteTypeJComboBox;

    private: javax::swing::JComboBox<std::string>* totalAnimationsJComboBox;

    private: javax::swing::JComboBox<std::string>* totalFramesJComboBox;

    private: javax::swing::JTextField* widthReductionTextField;

    private: javax::swing::JCheckBox* writeOverOriginalJCheckBox;

    public: ImageProcessorInput* getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput* imageProcessorInput);

                //@Throws(IOException.constructor)
            
    public: void visit(BufferedImage* generatedBufferedImage, std::string name, int32_t index);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_H
