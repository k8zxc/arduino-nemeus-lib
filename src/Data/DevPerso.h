/**       __         __         __
 * |\ |  |_   |\/|  |_   |  |  (_
 * | \|  |__  |  |  |__  |__|  __)
 *
 * DevPerso.h - Device perso class to manage device personalization
 * 
 * Copyright (C) 2017 Nemeus - All Rights Reserved
 *
 * This file is part of Nemeus Smart IoT Sensor (Tm) SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 * http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#ifndef DEVPERSO_H
#define DEVPERSO_H

#include <stdint.h>
#include <Arduino.h>

typedef struct
{
  char* devUID;
  char* appUID;
  char* appKey;
  char* devAddr;
  char* appSKey;
  char* nwkSKey;
}DevPerso_t;

class DevPerso
{
	
  public:
    DevPerso();
    void setOtaaPerso(char devUID[16], char appUID[16], char AppKey[32]);
    void setAbpPerso(char devAddr[8], char nwkSKey[32], char appSKey[32]);
    DevPerso_t* getDevPerso(void);
  protected:
  private:
    DevPerso_t devPerso_;
};

#endif // DEVPERSO_H
