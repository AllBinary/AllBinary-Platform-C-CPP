
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

class ImageAnalysisResultsJPanel: public javax.swing.JPanel {
        

public constructor (std::vector<ImageAnalysisResults> imageAnalysisResultsArray);

    initComponents();

    updateImageColorRangeResults(ImageAnalysisResults imageAnalysisResults);

    private: avgBlueJTextField: javax.swing.JTextField;

    private: avgGreenJTextField: javax.swing.JTextField;

    private: avgRedJTextField: javax.swing.JTextField;

    private: jComboBox1: javax.swing.JComboBox;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel10: javax.swing.JLabel;

    private: jLabel11: javax.swing.JLabel;

    private: jLabel12: javax.swing.JLabel;

    private: jLabel13: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jLabel4: javax.swing.JLabel;

    private: jLabel5: javax.swing.JLabel;

    private: jLabel6: javax.swing.JLabel;

    private: jLabel7: javax.swing.JLabel;

    private: jLabel8: javax.swing.JLabel;

    private: jLabel9: javax.swing.JLabel;

    private: matchingPixelsJTextField: javax.swing.JTextField;

    private: maxBlueJTextField: javax.swing.JTextField;

    private: maxGreenJTextField: javax.swing.JTextField;

    private: maxRedJTextField: javax.swing.JTextField;

    private: minBlueJTextField: javax.swing.JTextField;

    private: minGreenJTextField: javax.swing.JTextField;

    private: minRedJTextField: javax.swing.JTextField;

    private: percentMatchingJTextField: javax.swing.JTextField;

    private: totalPixelsJTextField: javax.swing.JTextField;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H
