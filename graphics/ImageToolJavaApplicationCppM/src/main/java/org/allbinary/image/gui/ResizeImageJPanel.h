
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Float.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/Raster.h>

      
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "DefaultComboBoxModel.h"
#include "JLabel.h"
#include "JComboBox.h"
#include "JButton.h"
#include "JTextField.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Dimension.h"
#include "GroupLayout.h"
#include "Short.h"

class ResizeImageJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

public constructor (ImageProcessorInput imageProcessorInput);

    public process();

    public update();

    public updateFor16Above();

    public updateFor16Below();

    public ImageProcessorInput getImageProcessorInput();

    public setImageProcessorInput(ImageProcessorInput imageProcessorInput);

    initComponents();

    aboveJButtonActionPerformed(java.awt.event.ActionEvent evt);

    updateJButtonActionPerformed(java.awt.event.ActionEvent evt);

    adjustFor16AboveJButtonActionPerformed(java.awt.event.ActionEvent evt);

    adjustFor16BelowJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: aboveJButton: javax.swing.JButton;

    private: adjustFor16AboveJButton: javax.swing.JButton;

    private: adjustFor16BelowJButton: javax.swing.JButton;

    private: floatPercentJTextField: javax.swing.JTextField;

    private: jComboBox1: javax.swing.JComboBox<string>;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jTextField1: javax.swing.JTextField;

    private: jTextField2: javax.swing.JTextField;

    private: updateJButton: javax.swing.JButton;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_H
