
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
class ImageAnalysisResults;
class ImageColorRangeResults;
class ImageColorResults;
class CommonPhoneStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
class JLabel;
class JTextField;
class JComboBox;
class DefaultComboBoxModel;
class GroupLayout;
class Short;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageAnalysisResultsJPanel: public javax::swing::JPanel {

public: ImageAnalysisResultsJPanel(std::vector<ImageAnalysisResults*> imageAnalysisResultsArray);

    private: void initComponents();

    private: void updateImageColorRangeResults(ImageAnalysisResults* imageAnalysisResults);

    private: javax::swing::JTextField* avgBlueJTextField;

    private: javax::swing::JTextField* avgGreenJTextField;

    private: javax::swing::JTextField* avgRedJTextField;

    private: javax::swing::JComboBox* jComboBox1;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel10;

    private: javax::swing::JLabel* jLabel11;

    private: javax::swing::JLabel* jLabel12;

    private: javax::swing::JLabel* jLabel13;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JLabel* jLabel4;

    private: javax::swing::JLabel* jLabel5;

    private: javax::swing::JLabel* jLabel6;

    private: javax::swing::JLabel* jLabel7;

    private: javax::swing::JLabel* jLabel8;

    private: javax::swing::JLabel* jLabel9;

    private: javax::swing::JTextField* matchingPixelsJTextField;

    private: javax::swing::JTextField* maxBlueJTextField;

    private: javax::swing::JTextField* maxGreenJTextField;

    private: javax::swing::JTextField* maxRedJTextField;

    private: javax::swing::JTextField* minBlueJTextField;

    private: javax::swing::JTextField* minGreenJTextField;

    private: javax::swing::JTextField* minRedJTextField;

    private: javax::swing::JTextField* percentMatchingJTextField;

    private: javax::swing::JTextField* totalPixelsJTextField;

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_H_COMPLETE
        #if __has_include(<org/allbinary/media/image/analysis/ImageAnalysisResults.h>)
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ImageColorRangeResults.h>)
#include <org/allbinary/media/image/analysis/ImageColorRangeResults.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ImageColorResults.h>)
#include <org/allbinary/media/image/analysis/ImageColorResults.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include("org/allbinary/image/gui/JPanel.h")
#include "org/allbinary/image/gui/JPanel.h"
#endif
#if __has_include("org/allbinary/image/gui/JLabel.h")
#include "org/allbinary/image/gui/JLabel.h"
#endif
#if __has_include("org/allbinary/image/gui/JTextField.h")
#include "org/allbinary/image/gui/JTextField.h"
#endif
#if __has_include("org/allbinary/image/gui/JComboBox.h")
#include "org/allbinary/image/gui/JComboBox.h"
#endif
#if __has_include("org/allbinary/image/gui/DefaultComboBoxModel.h")
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#endif
#if __has_include("org/allbinary/image/gui/GroupLayout.h")
#include "org/allbinary/image/gui/GroupLayout.h"
#endif
#if __has_include("org/allbinary/image/gui/Short.h")
#include "org/allbinary/image/gui/Short.h"
#endif

        #endif
    
