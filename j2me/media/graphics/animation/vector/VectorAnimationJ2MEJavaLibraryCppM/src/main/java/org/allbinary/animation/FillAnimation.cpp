
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "AnimationBehavior.h"

class FillAnimation: public IndexedAnimation {

    private: std::vector<int32_t> pixelBuffer;

    private: int32_t width;

    private: int32_t height;

public: FillAnimation(std::vector<int32_t> pixelBuffer, int32_t width, int32_t height, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->width= 100;
    
this->height= 100;
    
this->pixelBuffer= pixelBuffer;
    
}


    public: void setBasicColorP(BasicColor basicColor){

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || this->getBasicColorP().intValue() != basicColor.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    public: void changeBasicColor(BasicColor basicColor){

    bool changed = false;;
    

                        if(this->getChangeBasicColor() == 
                                    nullptr
                                 || this->getChangeBasicColor().intValue() != basicColor.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    public: void setAlpha(int32_t alpha){

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    public: void setScale(float scaleX, float scaleY){
}


    public: void setMaxScale(float maxScaleX, float maxScaleY){
}


    private: void updateModifiers(){
}


    protected: void paint(Graphics g){
g.drawRGB(pixelBuffer, 0, width, 0, 0, width, height, true);
    
}


};

            

