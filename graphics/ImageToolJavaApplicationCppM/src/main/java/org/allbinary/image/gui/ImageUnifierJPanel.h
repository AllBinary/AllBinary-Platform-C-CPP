
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
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
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/ImageIconUnique.h"
#include "org/allbinary/image/gui/DefaultListModel.h"
#include "org/allbinary/image/gui/ImageIcon.h"
#include "org/allbinary/image/gui/Icon.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JScrollPane.h"
#include "org/allbinary/image/gui/JList.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/Dimension.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/PropertyChangeListener.h"
#include "org/allbinary/image/gui/PropertyChangeEvent.h"
#include "org/allbinary/image/gui/KeyAdapter.h"
#include "org/allbinary/image/gui/KeyEvent.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"

class ImageUnifierJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ImageStrings* imageStrings = ImageStrings::getInstance();

    private: ImagesRatioUtil* imagesRatioUtil = ImagesRatioUtil::getInstance();

    private: ImageProcessorInput* imageProcessorInput;

    private: std::vector<ImageIconUnique*> icon;

    private: ImageUnifierProperties* imageUnifierProperties;

    private: BufferedImage* result;

    private: bool isImageFillIn = true;

public: ImageUnifierJPanel(ImageProcessorInput* imageProcessorInput);

    public: void init();

    private: void updateImage();

    private: void updateImageWithFudgedImages();

    private: void updateImage(std::vector<BufferedImage*> tempBufferedImageArray);

    private: void updateOnPropertiesChange();

    private: void initComponents();

    private: void jButton2ActionPerformed(java::awt::event::ActionEvent* evt);

    private: void columnsJTextFieldKeyPressed(java::awt::event::KeyEvent* evt);

    private: void columnsJTextFieldKeyTyped(java::awt::event::KeyEvent* evt);

    private: void columnsJTextFieldPropertyChange(java::beans::PropertyChangeEvent* evt);

    private: void fudgeItJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void cellHeightJTextFieldActionPerformed(java::awt::event::ActionEvent* evt);

    private: void cellWidthJTextFieldActionPerformed(java::awt::event::ActionEvent* evt);

    private: void columnsJTextFieldActionPerformed(java::awt::event::ActionEvent* evt);

    private: void rowsJTextFieldActionPerformed(java::awt::event::ActionEvent* evt);

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent* evt);

    private: void downJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void upJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void jButtonOrderActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JTextField* avgRatioJTextField;

    private: javax::swing::JTextField* cellHeightJTextField;

    private: javax::swing::JTextField* cellRatioJTextField;

    private: javax::swing::JTextField* cellWidthJTextField;

    private: javax::swing::JTextField* columnsJTextField;

    private: javax::swing::JButton* downJButton;

    private: javax::swing::JButton* fudgeItJButton;

    private: javax::swing::JList* imageJList;

    private: javax::swing::JButton* jButton1;

    private: javax::swing::JButton* jButton2;

    private: javax::swing::JButton* jButtonOrder;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JLabel* jLabel4;

    private: javax::swing::JLabel* jLabel5;

    private: javax::swing::JLabel* jLabel6;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JScrollPane* jScrollPane1;

    private: javax::swing::JScrollPane* jScrollPane2;

    private: javax::swing::JTextField* rowsJTextField;

    private: javax::swing::JButton* upJButton;

    public: ImageProcessorInput* getImageProcessorInput();

    public: void setImageProcessorInput(ImageProcessorInput* imageProcessorInput);

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_H
