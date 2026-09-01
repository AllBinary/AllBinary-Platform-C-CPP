
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

            #include <vector>
        
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

class ImageUnifierJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: const ImagesRatioUtil imagesRatioUtil = ImagesRatioUtil::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: std::vector<ImageIconUnique> icon;

    private: ImageUnifierProperties imageUnifierProperties;

    private: BufferedImage result;

    private: bool isImageFillIn = true;

public: ImageUnifierJPanel(ImageProcessorInput imageProcessorInput);

    public: void init();

    private: void updateImage();

    private: void updateImageWithFudgedImages();

    private: void updateImage(std::vector<BufferedImage> tempBufferedImageArray);

    private: void updateOnPropertiesChange();

    private: void initComponents();

    private: void jButton2ActionPerformed(java::awt::event::ActionEvent evt);

    private: void columnsJTextFieldKeyPressed(java::awt::event::KeyEvent evt);

    private: void columnsJTextFieldKeyTyped(java::awt::event::KeyEvent evt);

    private: void columnsJTextFieldPropertyChange(java::beans::PropertyChangeEvent evt);

    private: void fudgeItJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void cellHeightJTextFieldActionPerformed(java::awt::event::ActionEvent evt);

    private: void cellWidthJTextFieldActionPerformed(java::awt::event::ActionEvent evt);

    private: void columnsJTextFieldActionPerformed(java::awt::event::ActionEvent evt);

    private: void rowsJTextFieldActionPerformed(java::awt::event::ActionEvent evt);

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt);

    private: void downJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void upJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void jButtonOrderActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JTextField avgRatioJTextField;

    private: javax::swing::JTextField cellHeightJTextField;

    private: javax::swing::JTextField cellRatioJTextField;

    private: javax::swing::JTextField cellWidthJTextField;

    private: javax::swing::JTextField columnsJTextField;

    private: javax::swing::JButton downJButton;

    private: javax::swing::JButton fudgeItJButton;

    private: javax::swing::JList imageJList;

    private: javax::swing::JButton jButton1;

    private: javax::swing::JButton jButton2;

    private: javax::swing::JButton jButtonOrder;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JScrollPane jScrollPane1;

    private: javax::swing::JScrollPane jScrollPane2;

    private: javax::swing::JTextField rowsJTextField;

    private: javax::swing::JButton upJButton;

    public: ImageProcessorInput getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_H
