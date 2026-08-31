
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
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

class MirrorImageJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: result: BufferedImage;

public constructor (ImageProcessorInput imageProcessorInput);

    public process();

    initComponents();

    generateJButtonActionPerformed(java.awt.event.ActionEvent evt);

    renameJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: buttonGroup: javax.swing.ButtonGroup;

    private: generateJButton: javax.swing.JButton;

    private: horizontalJCheckBox: javax.swing.JCheckBox;

    private: jLabel2: javax.swing.JLabel;

    private: jLayeredPane1: javax.swing.JLayeredPane;

    private: jPanel1: javax.swing.JPanel;

    private: jPanel2: javax.swing.JPanel;

    private: jPanel3: javax.swing.JPanel;

    private: renameJRadioButton: javax.swing.JRadioButton;

    private: verticleJCheckBox: javax.swing.JCheckBox;

    private: writeOverOriginalJRadioButton: javax.swing.JRadioButton;

    public ImageProcessorInput getImageProcessorInput();

    public setImageProcessorInput(ImageProcessorInput imageProcessorInput);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_H
