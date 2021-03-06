// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <CCPACSControlSurfaceBorderTrailingEdge.h>
#include <string>
#include <tixi.h>
#include "CPACSControlSurfaceContours.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CCPACSTrailingEdgeDevice;

namespace generated
{
    // This class is used in:
    // CPACSTrailingEdgeDevice

    // generated from /xsd:schema/xsd:complexType[184]
    /// @brief Outer shape definition of the control surface.
    /// 
    /// Definition of the outer shape of the trailing Edge
    /// control surface.
    /// The position on the planform of the control surface is
    /// defined by defining the eta/xsi coordinates of the inner/outer
    /// and forward/rear border. The eta/xsi coordinates refer to the
    /// parent.
    /// Please find below an example for the definition of the
    /// planform of a trailing edge device. Other controlsurfaces are
    /// similar.
    /// @see outerShape1
    /// 
    class CPACSControlSurfaceOuterShapeTrailingEdge
    {
    public:
        TIGL_EXPORT CPACSControlSurfaceOuterShapeTrailingEdge(CCPACSTrailingEdgeDevice* parent);

        TIGL_EXPORT virtual ~CPACSControlSurfaceOuterShapeTrailingEdge();

        TIGL_EXPORT CCPACSTrailingEdgeDevice* GetParent();

        TIGL_EXPORT const CCPACSTrailingEdgeDevice* GetParent() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSControlSurfaceBorderTrailingEdge& GetInnerBorder() const;
        TIGL_EXPORT virtual CCPACSControlSurfaceBorderTrailingEdge& GetInnerBorder();

        TIGL_EXPORT virtual const CCPACSControlSurfaceBorderTrailingEdge& GetOuterBorder() const;
        TIGL_EXPORT virtual CCPACSControlSurfaceBorderTrailingEdge& GetOuterBorder();

        TIGL_EXPORT virtual const boost::optional<CPACSControlSurfaceContours>& GetIntermediateAirfoils() const;
        TIGL_EXPORT virtual boost::optional<CPACSControlSurfaceContours>& GetIntermediateAirfoils();

        TIGL_EXPORT virtual CPACSControlSurfaceContours& GetIntermediateAirfoils(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveIntermediateAirfoils();

    protected:
        CCPACSTrailingEdgeDevice* m_parent;

        CCPACSControlSurfaceBorderTrailingEdge       m_innerBorder;
        CCPACSControlSurfaceBorderTrailingEdge       m_outerBorder;
        boost::optional<CPACSControlSurfaceContours> m_intermediateAirfoils;

    private:
        CPACSControlSurfaceOuterShapeTrailingEdge(const CPACSControlSurfaceOuterShapeTrailingEdge&) = delete;
        CPACSControlSurfaceOuterShapeTrailingEdge& operator=(const CPACSControlSurfaceOuterShapeTrailingEdge&) = delete;

        CPACSControlSurfaceOuterShapeTrailingEdge(CPACSControlSurfaceOuterShapeTrailingEdge&&) = delete;
        CPACSControlSurfaceOuterShapeTrailingEdge& operator=(CPACSControlSurfaceOuterShapeTrailingEdge&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSControlSurfaceOuterShapeTrailingEdge = generated::CPACSControlSurfaceOuterShapeTrailingEdge;
} // namespace tigl
