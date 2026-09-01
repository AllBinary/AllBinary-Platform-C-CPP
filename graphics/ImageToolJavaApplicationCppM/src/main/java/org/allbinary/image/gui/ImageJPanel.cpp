
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
        



#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "Graphics.h"
#include "GroupLayout.h"
#include "Short.h"

class ImageJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CanvasStrings canvasStrings = CanvasStrings::getInstance();

    private: bool isDrawn = false;

    private: BufferedImage bufferedImage;

public: ImageJPanel(BufferedImage bufferedImage){
this->initComponents();
    
this->bufferedImage= bufferedImage;
    
this->setSize(this->bufferedImage.getWidth(
                            nullptr), this->bufferedImage.getHeight(
                            nullptr));
    
}


    public: void paint(Graphics graphics){

                        if(!this->isDrawn)
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->canvasStrings.PAINT);
    
graphics.drawImage(bufferedImage, 0, 0, this->bufferedImage.getWidth(
                            nullptr), this->bufferedImage.getHeight(
                            nullptr), 
                            nullptr);
    
this->isDrawn= true;
    

                                    }
                                
}


    private: void initComponents(){

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 400, Short::MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 300, Short::MAX_VALUE));
    
}


};

            

