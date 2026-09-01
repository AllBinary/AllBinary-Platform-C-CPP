
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

public: ImageAnalysisResultsJPanel(std::vector<ImageAnalysisResults> imageAnalysisResultsArray){
this->initComponents();
    

    ImageAnalysisResults imageAnalysisResults = imageAnalysisResultsArray[0];;
    
this->updateImageColorRangeResults(imageAnalysisResults);
    
}


    private: void initComponents(){
this->jLabel1= javax::swing::JLabel();
    
this->jLabel2= javax::swing::JLabel();
    
this->jLabel3= javax::swing::JLabel();
    
this->percentMatchingJTextField= javax::swing::JTextField();
    
this->totalPixelsJTextField= javax::swing::JTextField();
    
this->matchingPixelsJTextField= javax::swing::JTextField();
    
this->jComboBox1= javax::swing::JComboBox();
    
this->jLabel4= javax::swing::JLabel();
    
this->jLabel5= javax::swing::JLabel();
    
this->jLabel6= javax::swing::JLabel();
    
this->jLabel7= javax::swing::JLabel();
    
this->avgRedJTextField= javax::swing::JTextField();
    
this->avgGreenJTextField= javax::swing::JTextField();
    
this->avgBlueJTextField= javax::swing::JTextField();
    
this->minGreenJTextField= javax::swing::JTextField();
    
this->jLabel8= javax::swing::JLabel();
    
this->jLabel9= javax::swing::JLabel();
    
this->jLabel10= javax::swing::JLabel();
    
this->minRedJTextField= javax::swing::JTextField();
    
this->minBlueJTextField= javax::swing::JTextField();
    
this->jLabel11= javax::swing::JLabel();
    
this->jLabel12= javax::swing::JLabel();
    
this->jLabel13= javax::swing::JLabel();
    
this->maxRedJTextField= javax::swing::JTextField();
    
this->maxGreenJTextField= javax::swing::JTextField();
    
this->maxBlueJTextField= javax::swing::JTextField();
    
this->jLabel1.setText("Matching Pixels:");
    
this->jLabel2.setText("Total Pixels:");
    
this->jLabel3.setText("Percent Matching:");
    
this->percentMatchingJTextField.setEditable(false);
    
this->totalPixelsJTextField.setEditable(false);
    
this->matchingPixelsJTextField.setEditable(false);
    
this->jComboBox1.setModel(javax::swing::DefaultComboBoxModel(
                                                {
                                                    CommonPhoneStrings::getInstance().ONE
                                                }));
    
this->jComboBox1.setEnabled(false);
    
this->jLabel4.setText("Image:");
    
this->jLabel5.setText("Average Red:");
    
this->jLabel6.setText("Average Green:");
    
this->jLabel7.setText("Average Blue:");
    
this->avgRedJTextField.setEditable(false);
    
this->avgGreenJTextField.setEditable(false);
    
this->avgBlueJTextField.setEditable(false);
    
this->minGreenJTextField.setEditable(false);
    
this->jLabel8.setText("Min Red:");
    
this->jLabel9.setText("Min Green:");
    
this->jLabel10.setText("Min Blue:");
    
this->minRedJTextField.setEditable(false);
    
this->minBlueJTextField.setEditable(false);
    
this->jLabel11.setText("Max Red:");
    
this->jLabel12.setText("Max Green:");
    
this->jLabel13.setText("Max Blue:");
    
this->maxRedJTextField.setEditable(false);
    
this->maxGreenJTextField.setEditable(false);
    
this->maxBlueJTextField.setEditable(false);
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel3).addComponent(jLabel2).addComponent(jLabel1).addComponent(jLabel5).addComponent(jLabel6).addComponent(jLabel7).addComponent(jLabel4)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, 81, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(avgBlueJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 81, Short::MAX_VALUE).addComponent(avgGreenJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 81, Short::MAX_VALUE).addComponent(avgRedJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 81, Short::MAX_VALUE).addComponent(totalPixelsJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 81, Short::MAX_VALUE).addComponent(percentMatchingJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 81, Short::MAX_VALUE).addComponent(matchingPixelsJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 81, Short::MAX_VALUE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel12).addComponent(jLabel13).addComponent(jLabel8).addComponent(jLabel9).addComponent(jLabel10).addComponent(jLabel11)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(minRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(maxGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(minGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(minBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(maxRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(maxBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)).addContainerGap(18, Short::MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel4).addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(matchingPixelsJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel8).addComponent(minRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel2).addComponent(totalPixelsJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel9).addComponent(minGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel3).addComponent(percentMatchingJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel10).addComponent(minBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel5).addComponent(avgRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel11).addComponent(maxRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel6).addComponent(avgGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(maxGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel12)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel7).addComponent(avgBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel13).addComponent(maxBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))));
    
}


    private: void updateImageColorRangeResults(ImageAnalysisResults imageAnalysisResults){

    ImageColorRangeResults imageColorRangeResults = imageAnalysisResults.getImageColorRangeResults();;
    
this->matchingPixelsJTextField.setText(Long(imageColorRangeResults.getMatchingPixelsChecked()).toString());
    
this->totalPixelsJTextField.setText(Long(imageColorRangeResults.getTotalPixelsChecked()).toString());
    
this->percentMatchingJTextField.setText(number(imageColorRangeResults.getPercent()).toString());
    

    ImageColorResults imageColorResults = imageAnalysisResults.getImageColorResults();;
    
this->avgRedJTextField.setText(number(imageColorResults.getColorAverage().getAvgRed()).toString());
    
this->avgGreenJTextField.setText(number(imageColorResults.getColorAverage().getAvgGreen()).toString());
    
this->avgBlueJTextField.setText(number(imageColorResults.getColorAverage().getAvgBlue()).toString());
    
this->minRedJTextField.setText(Long(imageColorResults.getColorRange().getMinRed()).toString());
    
this->minGreenJTextField.setText(Long(imageColorResults.getColorRange().getMinGreen()).toString());
    
this->minBlueJTextField.setText(Long(imageColorResults.getColorRange().getMinBlue()).toString());
    
this->maxRedJTextField.setText(Long(imageColorResults.getColorRange().getMaxRed()).toString());
    
this->maxGreenJTextField.setText(Long(imageColorResults.getColorRange().getMaxGreen()).toString());
    
this->maxBlueJTextField.setText(Long(imageColorResults.getColorRange().getMaxBlue()).toString());
    
}


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

            

