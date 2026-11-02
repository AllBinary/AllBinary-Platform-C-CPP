
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FILLANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_FILLANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/FillAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"


FillAnimation::FillAnimation(std::vector<int32_t> pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->width= 100;
    
this->height= 100;
    
this->pixelBuffer= pixelBuffer;
    
}


    auto FillAnimation::setBasicColorP(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getBasicColorP() == 
                                    nullptr
                                 || JavaBoxes::value<int32_t>(this->getBasicColorP()) != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
IndexedAnimation::setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    auto FillAnimation::changeBasicColor(BasicColor* basicColor) -> void{

    bool changed = false;;
    

                        if(this->getChangeBasicColor() == 
                                    nullptr
                                 || JavaBoxes::value<int32_t>(this->getChangeBasicColor()) != basicColor->intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
IndexedAnimation::changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    auto FillAnimation::setAlpha(int32_t alpha) -> void{

    bool changed = false;;
    

                        if(this->alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
IndexedAnimation::setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this->updateModifiers();
    

                                    }
                                
}


    auto FillAnimation::setScale(float scaleX, float scaleY) -> void{
}


    auto FillAnimation::setMaxScale(float maxScaleX, float maxScaleY) -> void{
}


    auto FillAnimation::updateModifiers() -> void{
}


    auto FillAnimation::paint(Graphics* g) -> void{
g->drawRGB(pixelBuffer, 0, width, 0, 0, width, height, true);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_FILLANIMATION_CPP
