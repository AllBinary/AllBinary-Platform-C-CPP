
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_ROTATIONIMAGEJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_ROTATIONIMAGEJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
class ImageIO;
class LogUtil;
class StringMaker;
class ImageArrayRotationUtil;
#include <org/allbinary/media/image/ImageProcessedVisitor.h>
class ImageProcessorInput;
class ImageStrings;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
class Graphics;
class JLabel;
class JButton;
class JComboBox;
class JCheckBox;
class GroupLayout;
class Short;
class ActionListener;
class ActionEvent;
class DefaultComboBoxModel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RotationImageJPanel: public javax::swing::JPanel, public virtual ImageProcessedVisitor {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ImageStrings* imageStrings;

    private: ImageProcessorInput* imageProcessorInput;

    private: BufferedImage* result;

public: RotationImageJPanel(ImageProcessorInput* imageProcessorInput);

    public: void process();

    private: void initComponents();

    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void totalAngleJComboBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* generateJButton;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JPanel* jPanel2;

    private: javax::swing::JPanel* jPanel3;

    private: javax::swing::JComboBox* totalAngleJComboBox;

    private: javax::swing::JCheckBox* writeOverOriginalJCheckBox;

    public: ImageProcessorInput* getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput* imageProcessorInput);

                //@Throws(IOException.constructor)
            
    public: void visit(BufferedImage* generatedBufferedImage, std::string name, int32_t index);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_ROTATIONIMAGEJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_GUI_ROTATIONIMAGEJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_GUI_ROTATIONIMAGEJPANEL_H_COMPLETE
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
#if __has_include(<org/allbinary/media/image/ImageArrayRotationUtil.h>)
#include <org/allbinary/media/image/ImageArrayRotationUtil.h>
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
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/image/gui/JPanel.h")
#include "org/allbinary/image/gui/JPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/Graphics.h")
#include "org/allbinary/image/gui/Graphics.h"
#endif
#if __has_include("org/allbinary/image/gui/JLabel.h")
#include "org/allbinary/image/gui/JLabel.h"
#endif
#if __has_include("org/allbinary/image/gui/JButton.h")
#include "org/allbinary/image/gui/JButton.h"
#endif
#if __has_include("org/allbinary/image/gui/JComboBox.h")
#include "org/allbinary/image/gui/JComboBox.h"
#endif
#if __has_include("org/allbinary/image/gui/JCheckBox.h")
#include "org/allbinary/image/gui/JCheckBox.h"
#endif
#if __has_include("org/allbinary/image/gui/GroupLayout.h")
#include "org/allbinary/image/gui/GroupLayout.h"
#endif
#if __has_include("org/allbinary/image/gui/Short.h")
#include "org/allbinary/image/gui/Short.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionListener.h")
#include "org/allbinary/image/gui/ActionListener.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionEvent.h")
#include "org/allbinary/image/gui/ActionEvent.h"
#endif
#if __has_include("org/allbinary/image/gui/DefaultComboBoxModel.h")
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#endif

        #endif
    
