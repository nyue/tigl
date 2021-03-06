/*
* Copyright (C) 2007-2014 German Aerospace Center (DLR/SC)
*
* Created: 2014-02-10 Tobias Stollenwerk <tobias.stollenwerk@dlr.de>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
/**
* @file
* @brief  Implementation of CPACS guide curve profiles handling routines
*/

#include "CCPACSGuideCurveProfiles.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CCPACSGuideCurveProfile.h"

namespace tigl
{
CCPACSGuideCurveProfiles::CCPACSGuideCurveProfiles(CTiglUIDManager* uidMgr)
    : generated::CPACSGuideCurveProfiles(uidMgr) {}

// Returns the total count of guide curves in this configuration
int CCPACSGuideCurveProfiles::GetGuideCurveProfileCount() const
{
    return static_cast<int>(m_guideCurveProfiles.size());
}

// Returns the guide curve for a given uid.
CCPACSGuideCurveProfile& CCPACSGuideCurveProfiles::GetGuideCurveProfile(const std::string& uid) const
{
    for (auto& p : m_guideCurveProfiles)
        if (p->GetUID() == uid)
            return *p;

    LOG(ERROR) << "Guide curve \"" + uid + "\" not found in CPACS file!" << std::endl;
    throw CTiglError("Guide curve \"" + uid + "\" not found in CPACS file!", TIGL_UID_ERROR);
}

} // end namespace tigl


