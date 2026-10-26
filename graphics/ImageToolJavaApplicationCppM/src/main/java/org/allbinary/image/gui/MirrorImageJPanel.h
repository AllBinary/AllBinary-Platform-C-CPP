
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/MirrorImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JLayeredPane.h"
#include "ButtonGroup.h"
#include "Graphics.h"
#include "JCheckBox.h"
#include "JButton.h"
#include "JRadioButton.h"
#include "JLabel.h"
#include "GroupLayout.h"
#include "Short.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class MirrorImageJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: BufferedImage result;

public: MirrorImageJPanel(ImageProcessorInput imageProcessorInput);

    public: void process();

    private: void initComponents();

    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void renameJRadioButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::ButtonGroup buttonGroup;

    private: javax::swing::JButton generateJButton;

    private: javax::swing::JCheckBox horizontalJCheckBox;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLayeredPane jLayeredPane1;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JPanel jPanel2;

    private: javax::swing::JPanel jPanel3;

    private: javax::swing::JRadioButton renameJRadioButton;

    private: javax::swing::JCheckBox verticleJCheckBox;

    private: javax::swing::JRadioButton writeOverOriginalJRadioButton;

    public: ImageProcessorInput getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_H
