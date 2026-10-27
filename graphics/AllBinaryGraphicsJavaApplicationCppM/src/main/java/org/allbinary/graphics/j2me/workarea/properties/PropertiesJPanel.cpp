
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_PROPERTIES_PROPERTIESJPANEL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_PROPERTIES_PROPERTIESJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/properties/PropertiesJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/properties/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/properties/JButton.h"
#include "org/allbinary/graphics/j2me/workarea/properties/JTextField.h"
#include "org/allbinary/graphics/j2me/workarea/properties/GridLayout.h"
#include "org/allbinary/graphics/j2me/workarea/properties/Font.h"


PropertiesJPanel::PropertiesJPanel(){
this->initComponents();
    
}


    auto PropertiesJPanel::set(JPanel* panel) -> void{
this->workAreaPropertiesJPanel->add(panel);
    
this->repaint();
    
}


    auto PropertiesJPanel::initComponents() -> void{
this->workAreaPropertiesJPanel= new javax::swing::JPanel();
    
this->modifierJPanel= new javax::swing::JPanel();
    
this->copyVerticalJButton= new javax::swing::JButton();
    
this->copyHorizontalJButton= new javax::swing::JButton();
    
this->rotateJPanel= new javax::swing::JPanel();
    
this->rotateJButton= new javax::swing::JButton();
    
this->angleJTextField= new javax::swing::JTextField();
    
this->jPanel7= new javax::swing::JPanel();
    
this->upJButton= new javax::swing::JButton();
    
this->downJButton= new javax::swing::JButton();
    
this->jPanel8= new javax::swing::JPanel();
    
this->leftJButton= new javax::swing::JButton();
    
this->rightJButton= new javax::swing::JButton();
    
setLayout(new java::awt::GridLayout(2, 1));
    
this->workAreaPropertiesJPanel->setLayout(new java::awt::GridLayout());
    
add(this->workAreaPropertiesJPanel);
    
this->modifierJPanel->setLayout(new java::awt::GridLayout(6, 0));
    
this->copyVerticalJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->copyVerticalJButton->setText("Copy Vertical");
    
this->modifierJPanel->add(this->copyVerticalJButton);
    
this->copyHorizontalJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->copyHorizontalJButton->setText("Copy Horizontal");
    
this->modifierJPanel->add(this->copyHorizontalJButton);
    
this->rotateJPanel->setLayout(new java::awt::GridLayout(1, 2));
    
this->rotateJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->rotateJButton->setText("Rotate");
    
this->rotateJPanel->add(this->rotateJButton);
    
this->angleJTextField->setText("Angle");
    
this->rotateJPanel->add(this->angleJTextField);
    
this->modifierJPanel->add(this->rotateJPanel);
    
this->jPanel7->setLayout(new java::awt::GridLayout(1, 2));
    
this->upJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->upJButton->setText("Up");
    
this->jPanel7->add(this->upJButton);
    
this->downJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->downJButton->setText("Down");
    
this->jPanel7->add(this->downJButton);
    
this->modifierJPanel->add(this->jPanel7);
    
this->jPanel8->setLayout(new java::awt::GridLayout(1, 2));
    
this->leftJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->leftJButton->setText("Left");
    
this->jPanel8->add(this->leftJButton);
    
this->rightJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->rightJButton->setText("Right");
    
this->jPanel8->add(this->rightJButton);
    
this->modifierJPanel->add(this->jPanel8);
    
add(this->modifierJPanel);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_PROPERTIES_PROPERTIESJPANEL_CPP
