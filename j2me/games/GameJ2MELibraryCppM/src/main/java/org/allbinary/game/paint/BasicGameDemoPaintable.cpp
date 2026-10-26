
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/StatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameDemoPaintable: public StatePaintable {

    private: Paintable mainDemoStatePaintable;

    private: Paintable ownershipPaintable;

    private: Paintable helpPaintableInterface;

    private: Paintable currentStatePaintable = NullPaintable::getInstance();

public: BasicGameDemoPaintable(Paintable mainDemoStatePaintable, Paintable ownershipPaintable, Paintable helpPaintableInterface){
this->mainDemoStatePaintable= mainDemoStatePaintable;
    
this->setCurrentStatePaintable(NullPaintable::getInstance());
    
this->ownershipPaintable= ownershipPaintable;
    
this->helpPaintableInterface= helpPaintableInterface;
    
}


    public: void setState(int32_t state){

                        if(state == 0)
                        
                                    {
                                    this->setCurrentStatePaintable(this->getMainDemoStatePaintable());
    

                                    }
                                
                             else 
                        if(state == 1)
                        
                                    {
                                    this->setCurrentStatePaintable(this->helpPaintableInterface);
    

                                    }
                                
                        else {
                            this->setCurrentStatePaintable(this->ownershipPaintable);
    

                        }
                            
}


    public: void paint(Graphics graphics){
this->getCurrentStatePaintable().paint(graphics);
    
}


    public: Paintable getHelpPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->helpPaintableInterface;
    
}


    protected: void setCurrentStatePaintable(Paintable currentStatePaintable){
this->currentStatePaintable= currentStatePaintable;
    
}


    protected: Paintable getCurrentStatePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentStatePaintable;
    
}


    protected: Paintable getMainDemoStatePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mainDemoStatePaintable;
    
}


};

            

