
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/ImageAnalysisResultsJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>

      
#include <org/allbinary/media/image/analysis/ImageColorRangeResults.h>

      
#include <org/allbinary/media/image/analysis/ImageColorResults.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/JComboBox.h"
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"


ImageAnalysisResultsJPanel::ImageAnalysisResultsJPanel(std::vector<ImageAnalysisResults*> imageAnalysisResultsArray){
this->initComponents();
    

    ImageAnalysisResults* imageAnalysisResults = imageAnalysisResultsArray[0];;
    
this->updateImageColorRangeResults(imageAnalysisResults);
    
}


    auto ImageAnalysisResultsJPanel::initComponents() -> void{
this->jLabel1= new javax::swing::JLabel();
    
this->jLabel2= new javax::swing::JLabel();
    
this->jLabel3= new javax::swing::JLabel();
    
this->percentMatchingJTextField= new javax::swing::JTextField();
    
this->totalPixelsJTextField= new javax::swing::JTextField();
    
this->matchingPixelsJTextField= new javax::swing::JTextField();
    
this->jComboBox1= new javax::swing::JComboBox();
    
this->jLabel4= new javax::swing::JLabel();
    
this->jLabel5= new javax::swing::JLabel();
    
this->jLabel6= new javax::swing::JLabel();
    
this->jLabel7= new javax::swing::JLabel();
    
this->avgRedJTextField= new javax::swing::JTextField();
    
this->avgGreenJTextField= new javax::swing::JTextField();
    
this->avgBlueJTextField= new javax::swing::JTextField();
    
this->minGreenJTextField= new javax::swing::JTextField();
    
this->jLabel8= new javax::swing::JLabel();
    
this->jLabel9= new javax::swing::JLabel();
    
this->jLabel10= new javax::swing::JLabel();
    
this->minRedJTextField= new javax::swing::JTextField();
    
this->minBlueJTextField= new javax::swing::JTextField();
    
this->jLabel11= new javax::swing::JLabel();
    
this->jLabel12= new javax::swing::JLabel();
    
this->jLabel13= new javax::swing::JLabel();
    
this->maxRedJTextField= new javax::swing::JTextField();
    
this->maxGreenJTextField= new javax::swing::JTextField();
    
this->maxBlueJTextField= new javax::swing::JTextField();
    
this->jLabel1->setText("Matching Pixels:");
    
this->jLabel2->setText("Total Pixels:");
    
this->jLabel3->setText("Percent Matching:");
    
this->percentMatchingJTextField->setEditable(false);
    
this->totalPixelsJTextField->setEditable(false);
    
this->matchingPixelsJTextField->setEditable(false);
    
this->jComboBox1->setModel(new javax::swing::DefaultComboBoxModel(std::vector<std::string>
                                                {
                                                    CommonPhoneStrings::getInstance()->ONE
                                                }));
    
this->jComboBox1->setEnabled(false);
    
this->jLabel4->setText("Image:");
    
this->jLabel5->setText("Average Red:");
    
this->jLabel6->setText("Average Green:");
    
this->jLabel7->setText("Average Blue:");
    
this->avgRedJTextField->setEditable(false);
    
this->avgGreenJTextField->setEditable(false);
    
this->avgBlueJTextField->setEditable(false);
    
this->minGreenJTextField->setEditable(false);
    
this->jLabel8->setText("Min Red:");
    
this->jLabel9->setText("Min Green:");
    
this->jLabel10->setText("Min Blue:");
    
this->minRedJTextField->setEditable(false);
    
this->minBlueJTextField->setEditable(false);
    
this->jLabel11->setText("Max Red:");
    
this->jLabel12->setText("Max Green:");
    
this->jLabel13->setText("Max Blue:");
    
this->maxRedJTextField->setEditable(false);
    
this->maxGreenJTextField->setEditable(false);
    
this->maxBlueJTextField->setEditable(false);
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jLabel3)->addComponent(jLabel2)->addComponent(jLabel1)->addComponent(jLabel5)->addComponent(jLabel6)->addComponent(jLabel7)->addComponent(jLabel4))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jComboBox1, GroupLayout::PREFERRED_SIZE, 81, GroupLayout::PREFERRED_SIZE)->addComponent(avgBlueJTextField, GroupLayout::DEFAULT_SIZE, 81, Short::MAX_VALUE)->addComponent(avgGreenJTextField, GroupLayout::DEFAULT_SIZE, 81, Short::MAX_VALUE)->addComponent(avgRedJTextField, GroupLayout::DEFAULT_SIZE, 81, Short::MAX_VALUE)->addComponent(totalPixelsJTextField, GroupLayout::DEFAULT_SIZE, 81, Short::MAX_VALUE)->addComponent(percentMatchingJTextField, GroupLayout::DEFAULT_SIZE, 81, Short::MAX_VALUE)->addComponent(matchingPixelsJTextField, GroupLayout::DEFAULT_SIZE, 81, Short::MAX_VALUE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jLabel12)->addComponent(jLabel13)->addComponent(jLabel8)->addComponent(jLabel9)->addComponent(jLabel10)->addComponent(jLabel11))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(minRedJTextField, GroupLayout::PREFERRED_SIZE, 82, GroupLayout::PREFERRED_SIZE)->addComponent(maxGreenJTextField, GroupLayout::PREFERRED_SIZE, 82, GroupLayout::PREFERRED_SIZE)->addComponent(minGreenJTextField, GroupLayout::PREFERRED_SIZE, 82, GroupLayout::PREFERRED_SIZE)->addComponent(minBlueJTextField, GroupLayout::PREFERRED_SIZE, 82, GroupLayout::PREFERRED_SIZE)->addComponent(maxRedJTextField, GroupLayout::PREFERRED_SIZE, 82, GroupLayout::PREFERRED_SIZE)->addComponent(maxBlueJTextField, GroupLayout::PREFERRED_SIZE, 82, GroupLayout::PREFERRED_SIZE))->addContainerGap(18, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel4)->addComponent(jComboBox1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel1)->addComponent(matchingPixelsJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel8)->addComponent(minRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel2)->addComponent(totalPixelsJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel9)->addComponent(minGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel3)->addComponent(percentMatchingJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel10)->addComponent(minBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel5)->addComponent(avgRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel11)->addComponent(maxRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel6)->addComponent(avgGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(maxGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel12))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel7)->addComponent(avgBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel13)->addComponent(maxBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))));
    
}


    auto ImageAnalysisResultsJPanel::updateImageColorRangeResults(ImageAnalysisResults* imageAnalysisResults) -> void{

    ImageColorRangeResults* imageColorRangeResults = imageAnalysisResults->getImageColorRangeResults();;
    
this->matchingPixelsJTextField->setText(JavaString::valueOf((int64_t(imageColorRangeResults->getMatchingPixelsChecked()))));
    
this->totalPixelsJTextField->setText(JavaString::valueOf((int64_t(imageColorRangeResults->getTotalPixelsChecked()))));
    
this->percentMatchingJTextField->setText(JavaString::valueOf((float(imageColorRangeResults->getPercent()))));
    

    ImageColorResults* imageColorResults = imageAnalysisResults->getImageColorResults();;
    
this->avgRedJTextField->setText(JavaString::valueOf((float(imageColorResults->getColorAverage()->getAvgRed()))));
    
this->avgGreenJTextField->setText(JavaString::valueOf((float(imageColorResults->getColorAverage()->getAvgGreen()))));
    
this->avgBlueJTextField->setText(JavaString::valueOf((float(imageColorResults->getColorAverage()->getAvgBlue()))));
    
this->minRedJTextField->setText(JavaString::valueOf((int64_t(imageColorResults->getColorRange()->getMinRed()))));
    
this->minGreenJTextField->setText(JavaString::valueOf((int64_t(imageColorResults->getColorRange()->getMinGreen()))));
    
this->minBlueJTextField->setText(JavaString::valueOf((int64_t(imageColorResults->getColorRange()->getMinBlue()))));
    
this->maxRedJTextField->setText(JavaString::valueOf((int64_t(imageColorResults->getColorRange()->getMaxRed()))));
    
this->maxGreenJTextField->setText(JavaString::valueOf((int64_t(imageColorResults->getColorRange()->getMaxGreen()))));
    
this->maxBlueJTextField->setText(JavaString::valueOf((int64_t(imageColorResults->getColorRange()->getMaxBlue()))));
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEANALYSISRESULTSJPANEL_CPP
