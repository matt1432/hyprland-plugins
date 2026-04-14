#pragma once
#include <hyprland/src/render/pass/PassElement.hpp>

class COverview;

class COverviewPassElement : public IPassElement {
  public:
    COverviewPassElement();
    virtual ~COverviewPassElement() = default;

    virtual std::vector<UP<IPassElement>> draw() override;
    virtual bool                needsLiveBlur();
    virtual bool                needsPrecomputeBlur();
    virtual std::optional<CBox> boundingBox();
    virtual CRegion             opaqueRegion();

    virtual ePassElementType    type() override { return EK_CUSTOM; }

    virtual const char*         passName() {
        return "COverviewPassElement";
    }
};