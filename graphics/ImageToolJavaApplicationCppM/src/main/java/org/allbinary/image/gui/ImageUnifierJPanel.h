
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/ImageUnifierCell.h>

      
#include <org/allbinary/media/image/ImageUnifierProperties.h>

      
#include <org/allbinary/media/image/ImageUnifierUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/ImagesRatioUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "ImageIconUnique.h"
#include "DefaultListModel.h"
#include "ImageIcon.h"
#include "Icon.h"
#include "JLabel.h"
#include "JScrollPane.h"
#include "JList.h"
#include "JButton.h"
#include "JTextField.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "PropertyChangeListener.h"
#include "PropertyChangeEvent.h"
#include "KeyAdapter.h"
#include "KeyEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class ImageUnifierJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: const imagesRatioUtil: ImagesRatioUtil = ImagesRatioUtil.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: icon: std::vector<ImageIconUnique>;

    private: imageUnifierProperties: ImageUnifierProperties;

    private: result: BufferedImage;

    private: isImageFillIn: bool = true;

public constructor (ImageProcessorInput imageProcessorInput);

    public init();

    updateImage();

    updateImageWithFudgedImages();

    updateImage(std::vector<BufferedImage> tempBufferedImageArray);

    updateOnPropertiesChange();

    initComponents();

    jButton2ActionPerformed(java.awt.event.ActionEvent evt);

    columnsJTextFieldKeyPressed(java.awt.event.KeyEvent evt);

    columnsJTextFieldKeyTyped(java.awt.event.KeyEvent evt);

    columnsJTextFieldPropertyChange(java.beans.PropertyChangeEvent evt);

    fudgeItJButtonActionPerformed(java.awt.event.ActionEvent evt);

    cellHeightJTextFieldActionPerformed(java.awt.event.ActionEvent evt);

    cellWidthJTextFieldActionPerformed(java.awt.event.ActionEvent evt);

    columnsJTextFieldActionPerformed(java.awt.event.ActionEvent evt);

    rowsJTextFieldActionPerformed(java.awt.event.ActionEvent evt);

    jButton1ActionPerformed(java.awt.event.ActionEvent evt);

    downJButtonActionPerformed(java.awt.event.ActionEvent evt);

    upJButtonActionPerformed(java.awt.event.ActionEvent evt);

    jButtonOrderActionPerformed(java.awt.event.ActionEvent evt);

    private: avgRatioJTextField: javax.swing.JTextField;

    private: cellHeightJTextField: javax.swing.JTextField;

    private: cellRatioJTextField: javax.swing.JTextField;

    private: cellWidthJTextField: javax.swing.JTextField;

    private: columnsJTextField: javax.swing.JTextField;

    private: downJButton: javax.swing.JButton;

    private: fudgeItJButton: javax.swing.JButton;

    private: imageJList: javax.swing.JList;

    private: jButton1: javax.swing.JButton;

    private: jButton2: javax.swing.JButton;

    private: jButtonOrder: javax.swing.JButton;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jLabel4: javax.swing.JLabel;

    private: jLabel5: javax.swing.JLabel;

    private: jLabel6: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: jScrollPane1: javax.swing.JScrollPane;

    private: jScrollPane2: javax.swing.JScrollPane;

    private: rowsJTextField: javax.swing.JTextField;

    private: upJButton: javax.swing.JButton;

    public ImageProcessorInput getImageProcessorInput();

    public setImageProcessorInput(ImageProcessorInput imageProcessorInput);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_H
