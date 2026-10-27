
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_MIRRORSPRITEIMAGEJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_MIRRORSPRITEIMAGEJPANEL_H

            #include <vector>
        
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

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/BufferedImageUtil2.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/MirrorImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JLayeredPane.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"

class MirrorSpriteImageJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ImageStrings* imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput* imageProcessorInput;

    private: BufferedImage* result;

public: MirrorSpriteImageJPanel(ImageProcessorInput* imageProcessorInput);

    public: void process();

    private: void initComponents();

    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void imageHeightIsFrameSizeJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* generateJButton;

    private: javax::swing::JCheckBox* horizontalJCheckBox;

    private: javax::swing::JCheckBox* imageHeightIsFrameSizeJCheckBox;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLayeredPane* jLayeredPane1;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JPanel* jPanel2;

    private: javax::swing::JPanel* jPanel3;

    private: javax::swing::JCheckBox* verticleJCheckBox;

    private: javax::swing::JCheckBox* writeOverOriginalJCheckBox;

    public: ImageProcessorInput* getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput* imageProcessorInput);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_MIRRORSPRITEIMAGEJPANEL_H
