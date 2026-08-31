
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageArrayRotationUtil.h>

      
#include <org/allbinary/media/image/ImageProcessedVisitor.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "Graphics.h"
#include "JLabel.h"
#include "JButton.h"
#include "JComboBox.h"
#include "JCheckBox.h"
#include "GroupLayout.h"
#include "Short.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "DefaultComboBoxModel.h"

class RotationImageJPanel: public javax.swing.JPanel: public ImageProcessedVisitor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: result: BufferedImage;

public constructor (ImageProcessorInput imageProcessorInput);

    public process();

    initComponents();

    generateJButtonActionPerformed(java.awt.event.ActionEvent evt);

    totalAngleJComboBoxActionPerformed(java.awt.event.ActionEvent evt);

    private: generateJButton: javax.swing.JButton;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: jPanel2: javax.swing.JPanel;

    private: jPanel3: javax.swing.JPanel;

    private: totalAngleJComboBox: javax.swing.JComboBox;

    private: writeOverOriginalJCheckBox: javax.swing.JCheckBox;

    public ImageProcessorInput getImageProcessorInput();

    public setImageProcessorInput(ImageProcessorInput imageProcessorInput);

                //@Throws(IOException.constructor)
            
    public visit(BufferedImage generatedBufferedImage, string name, int32_t index);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_ROTATIONIMAGEJPANEL_H
