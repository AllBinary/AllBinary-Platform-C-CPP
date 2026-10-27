
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class ImageIO;
class LogUtil;
class StringMaker;
class StringUtil;
#include <org/allbinary/media/image/ImageProcessedVisitor.h>
class ImageProcessorInput;
class ImageStrings;
class SpriteSplitterUtil;
class CommonPhoneStrings;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
class JCheckBox;
class JTextField;
class JLabel;
class Graphics;
class JButton;
#include "org/allbinary/image/gui/JComboBox.h"
class DefaultComboBoxModel;
class ActionListener;
class ActionEvent;
class GroupLayout;
class Short;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpriteSplitterImageJPanel: public javax::swing::JPanel, public ImageProcessedVisitor {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CommonSeps* commonSeps;

    private: ImageStrings* imageStrings;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/awt/image/RenderedImage.h>)
#include <java/awt/image/RenderedImage.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<javax/imageio/ImageIO.h>)
#include <javax/imageio/ImageIO.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageProcessedVisitor.h>)
#include <org/allbinary/media/image/ImageProcessedVisitor.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageProcessorInput.h>)
#include <org/allbinary/media/image/ImageProcessorInput.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageStrings.h>)
#include <org/allbinary/media/image/ImageStrings.h>
#endif
#if __has_include(<org/allbinary/media/image/SpriteSplitterUtil.h>)
#include <org/allbinary/media/image/SpriteSplitterUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/image/gui/JPanel.h")
#include "org/allbinary/image/gui/JPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/JCheckBox.h")
#include "org/allbinary/image/gui/JCheckBox.h"
#endif
#if __has_include("org/allbinary/image/gui/JTextField.h")
#include "org/allbinary/image/gui/JTextField.h"
#endif
#if __has_include("org/allbinary/image/gui/JLabel.h")
#include "org/allbinary/image/gui/JLabel.h"
#endif
#if __has_include("org/allbinary/image/gui/Graphics.h")
#include "org/allbinary/image/gui/Graphics.h"
#endif
#if __has_include("org/allbinary/image/gui/JButton.h")
#include "org/allbinary/image/gui/JButton.h"
#endif
#if __has_include("org/allbinary/image/gui/JComboBox.h")
#include "org/allbinary/image/gui/JComboBox.h"
#endif
#if __has_include("org/allbinary/image/gui/DefaultComboBoxModel.h")
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionListener.h")
#include "org/allbinary/image/gui/ActionListener.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionEvent.h")
#include "org/allbinary/image/gui/ActionEvent.h"
#endif
#if __has_include("org/allbinary/image/gui/GroupLayout.h")
#include "org/allbinary/image/gui/GroupLayout.h"
#endif
#if __has_include("org/allbinary/image/gui/Short.h")
#include "org/allbinary/image/gui/Short.h"
#endif

        #endif
    
