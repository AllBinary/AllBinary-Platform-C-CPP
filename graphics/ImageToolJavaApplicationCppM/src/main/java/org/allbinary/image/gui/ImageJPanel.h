
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEJPANEL_H
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEJPANEL_H

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

class ImageJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    private: isDrawn: bool = false;

    private: bufferedImage: BufferedImage;

public constructor (BufferedImage bufferedImage);

    public paint(Graphics graphics);

    initComponents();

};

            


        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEJPANEL_H
