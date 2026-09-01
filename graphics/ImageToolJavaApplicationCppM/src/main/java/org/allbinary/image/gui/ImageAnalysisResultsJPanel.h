
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H

            #include <vector>
        
            #include "../../../../java/lang/Long.h"
        
            #include "../../../../java/lang/Float.h"
        
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>

      
#include <org/allbinary/media/image/analysis/ImageColorRangeResults.h>

      
#include <org/allbinary/media/image/analysis/ImageColorResults.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JLabel.h"
#include "JTextField.h"
#include "JComboBox.h"
#include "DefaultComboBoxModel.h"
#include "GroupLayout.h"
#include "Short.h"

class ImageAnalysisResultsJPanel: public javax::swing::JPanel {

public: ImageAnalysisResultsJPanel(std::vector<ImageAnalysisResults> imageAnalysisResultsArray);

    private: void initComponents();

    private: void updateImageColorRangeResults(ImageAnalysisResults imageAnalysisResults);

    private: javax::swing::JTextField avgBlueJTextField;

    private: javax::swing::JTextField avgGreenJTextField;

    private: javax::swing::JTextField avgRedJTextField;

    private: javax::swing::JComboBox jComboBox1;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel10;

    private: javax::swing::JLabel jLabel11;

    private: javax::swing::JLabel jLabel12;

    private: javax::swing::JLabel jLabel13;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JLabel jLabel7;

    private: javax::swing::JLabel jLabel8;

    private: javax::swing::JLabel jLabel9;

    private: javax::swing::JTextField matchingPixelsJTextField;

    private: javax::swing::JTextField maxBlueJTextField;

    private: javax::swing::JTextField maxGreenJTextField;

    private: javax::swing::JTextField maxRedJTextField;

    private: javax::swing::JTextField minBlueJTextField;

    private: javax::swing::JTextField minGreenJTextField;

    private: javax::swing::JTextField minRedJTextField;

    private: javax::swing::JTextField percentMatchingJTextField;

    private: javax::swing::JTextField totalPixelsJTextField;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H
