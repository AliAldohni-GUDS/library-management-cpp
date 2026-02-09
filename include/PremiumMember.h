#ifndef PREMIUM_MEMBER_H
#define PREMIUM_MEMBER_H

#include "Member.h"

class PremiumMember : public Member {
public:
    PremiumMember(const std::string& name, const std::string& memberId)
        : Member(name, memberId, 5) {}
};

#endif
