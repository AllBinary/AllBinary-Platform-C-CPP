
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthInterface.h"
#include "NullHealthListener.h"
#include "HealthListenerInterface.h"

class Health
            : public Object
        : public HealthInterface {

    public: static const Health NULL_HEALTH = Health(0);

    public: static const std::string NAME = "Health Resource";

    private: static const std::string HEALTH_LABEL = "Health: ";

    private: static const std::string MAX_HEALTH_LABEL = " Max: ";

    private: int32_t health= 0;

    private: int32_t maxHealth= 0;

    private: HealthListenerInterface healthListenerInterface = NullHealthListener::NULL_HEALTH_LISTENER;

public: Health(int32_t maxHealth){
this->setMaxHealth(maxHealth);
    
this->setHealth(maxHealth);
    
}


    public: void heal(int32_t ahealth){

    int32_t newHealth = this->getHealth() +ahealth;;
    

                        if(newHealth > this->getMaxHealth())
                        
                                    {
                                    this->setHealth(this->getMaxHealth());
    

                                    }
                                
                        else {
                            this->setHealth(newHealth);
    

                        }
                            
}


    public: void healMax(){
this->setHealth(this->getMaxHealth());
    
}


    public: bool isDamaged(){

                        if(this->getHealth() != this->getMaxHealth())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: void damage(int32_t ahealth){

                        if(ahealth < 0)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("******* Trying to heal when damaging. Damage: ");
    
stringBuffer.appendint(ahealth);
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(this->toString());
    
ForcedLogUtil::log(stringBuffer.toString(), this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t health = this->getHealth() -ahealth;;
    
this->setHealth(health);
    
}


    public: bool isAlive(){

                        if(this->getHealth() <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: int32_t getMaxHealth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxHealth;
    
}


    public: void setMaxHealth(int32_t maxHealth){
this->maxHealth= maxHealth;
    
}


    public: void setHealth(int32_t health){

                        if(health > this->getMaxHealth())
                        
                                    {
                                    this->health= this->getMaxHealth();
    

                                    }
                                
                             else 
                        if(health < 0)
                        
                                    {
                                    this->health= 0;
    

                                    }
                                
                        else {
                            this->health= health;
    

                        }
                            

                        if(this->healthListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->healthListenerInterface.onHealthChange();
    

                                    }
                                
}


    public: int32_t getHealth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->health;
    
}


    public: void addListener(HealthListenerInterface healthGraphic){
this->healthListenerInterface= healthGraphic;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(Health::HEALTH_LABEL);
    
stringBuffer.appendint(this->health);
    
stringBuffer.append(Health::MAX_HEALTH_LABEL);
    
stringBuffer.appendint(this->maxHealth);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

