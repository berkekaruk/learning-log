# 🔐 SSH and security setup
### Establishing secure and password-less authentication with GitHub by replacing already configured HTTPS authentication with SSH.

---

## Setup process

### 1. Key generation (Ed25519)
For the key, I use the `ed25519` digital signature algorithm as it is more secure and performant than the RSA standard:

```bash
ssh-keygen -t ed25519 -C "berke@karuk.de"
```

### 2. Configuration of SSH agent
Starting the agent to run in the background and holding the key so that typing the passphrase is not required
```bash
eval "$(ssh-agent -s)"
```
On macOS, the key has to be added to the Apple keychain:
```bash
ssh-add --apple-use-keychain ~/.ssh/id_ed25519
```

## 3. Uploading public key to GitHub
Copying the public key to the clipboard::
```bash
pbcopy < ~/.ssh/id_ed25519.pub
```
Once copied, the key has to be pasted into GitHub Settings > SSH and GPG keys > New SSH Key.

## 4. Switching remote URL
Migrating the existing local repository from HTTPS to SSH:
```bash
git remote set-url origin git@github.com:berkekaruk/learning-log.git
```

## 5. Verification
Testing the connection to ensure the handshake is successful and expecting `Hi berkekaruk! You've successfully authenticated...` as output:
```bash
ssh -T git@github.com
```
