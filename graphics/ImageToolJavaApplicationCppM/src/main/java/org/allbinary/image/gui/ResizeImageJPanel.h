
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/Raster.h>
#include <java/io/File.h>
class LogUtil;
class FileWrapperUtil;
class ImagePersistanceUtil;
class ImageProcessorInput;
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>
class ImageUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
template<> class DefaultComboBoxModel;
class JLabel;
template<> class JComboBox;
class JButton;
class JTextField;
class ActionListener;
class ActionEvent;
class Dimension;
class GroupLayout;
class Short;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ResizeImageJPanel: public javax::swing::JPanel, public virtual ImageProcessorInputCompositeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ImageProcessorInput* imageProcessorInput;

public: ResizeImageJPanel(ImageProcessorInput* imageProcessorInput);

    public: void process();

    public: void update();

    public: void updateFor16Above();

    public: void updateFor16Below();

    public: ImageProcessorInput* getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput* imageProcessorInput);

    private: void initComponents();

    private: void aboveJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void updateJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void adjustFor16AboveJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void adjustFor16BelowJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* aboveJButton;

    private: javax::swing::JButton* adjustFor16AboveJButton;

    private: javax::swing::JButton* adjustFor16BelowJButton;

    private: javax::swing::JTextField* floatPercentJTextField;

    private: javax::swing::JComboBox<std::string>* jComboBox1;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JTextField* jTextField1;

    private: javax::swing::JTextField* jTextField2;

    private: javax::swing::JButton* updateJButton;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/awt/image/Raster.h>)
#include <java/awt/image/Raster.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileWrapperUtil.h>)
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImagePersistanceUtil.h>)
#include <org/allbinary/media/image/ImagePersistanceUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageProcessorInput.h>)
#include <org/allbinary/media/image/ImageProcessorInput.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>)
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageUtil.h>)
#include <org/allbinary/media/image/ImageUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/image/gui/JPanel.h")
#include "org/allbinary/image/gui/JPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/DefaultComboBoxModel.h")
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#endif
#if __has_include("org/allbinary/image/gui/JLabel.h")
#include "org/allbinary/image/gui/JLabel.h"
#endif
#if __has_include("org/allbinary/image/gui/JComboBox.h")
#include "org/allbinary/image/gui/JComboBox.h"
#endif
#if __has_include("org/allbinary/image/gui/JButton.h")
#include "org/allbinary/image/gui/JButton.h"
#endif
#if __has_include("org/allbinary/image/gui/JTextField.h")
#include "org/allbinary/image/gui/JTextField.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionListener.h")
#include "org/allbinary/image/gui/ActionListener.h"
#endif
#if __has_include("org/allbinary/image/gui/ActionEvent.h")
#include "org/allbinary/image/gui/ActionEvent.h"
#endif
#if __has_include("org/allbinary/image/gui/Dimension.h")
#include "org/allbinary/image/gui/Dimension.h"
#endif
#if __has_include("org/allbinary/image/gui/GroupLayout.h")
#include "org/allbinary/image/gui/GroupLayout.h"
#endif
#if __has_include("org/allbinary/image/gui/Short.h")
#include "org/allbinary/image/gui/Short.h"
#endif

        #endif
    
