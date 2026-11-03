
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/ImageJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"


ImageJPanel::ImageJPanel(BufferedImage* bufferedImage) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), canvasStrings(CanvasStrings::getInstance()){
this->initComponents();
    
this->bufferedImage= bufferedImage;
    
this->setSize(this->bufferedImage->getWidth(
                            nullptr), this->bufferedImage->getHeight(
                            nullptr));
    
}


    auto ImageJPanel::paint(Graphics* graphics) -> void{

                        if(!this->isDrawn)
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->canvasStrings->PAINT);
    
graphics->drawImage(bufferedImage, 0, 0, this->bufferedImage->getWidth(
                            nullptr), this->bufferedImage->getHeight(
                            nullptr), 
                            nullptr);
    
this->isDrawn= true;
    

                                    }
                                
}


    auto ImageJPanel::initComponents() -> void{

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGap(0, 400, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGap(0, 300, Short::MAX_VALUE));
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEJPANEL_CPP
